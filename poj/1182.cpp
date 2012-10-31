#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////
#define MAX_K 100000
#define MAX_N 50000
int N,K;

vector<int> par(MAX_N);
vector<int> rank(MAX_N);
vector<int> T(MAX_K),X(MAX_K),Y(MAX_K);



void init(int n){
  for(int i =0;i<n;i++){
    par[i]=i;
    rank[i]=0;
  }
}
int find(int x){
  if(par[x]==x){
    return x;  
  }else{
    return par[x] = find(par[x]);
  }
}
void unite(int x,int y){
  x=find(x);
  y=find(y);
  if(x==y){
    return;
  }
  if(rank[x]<rank[y]){
    par[x]=y;
  }else{
    par[y]=x;
    if(rank[x]==rank[y]){
	rank[x]++;
      }
  }
}
bool same(int x,int y){
  return find(x)==find(y);
}

void solve(){
  init(N*3);
  int ans=0;
  for(int i=0;i<K;i++){
    int t=T[i];
    int x=X[i]-1,y=Y[i]-1;
    if(x<0 || N<=x || y<0 || N<=y){
      ans++;
      continue;
    }  
    if(t==1){
      if(same(x,y+N)||same(x,y+2*N)){
	  ans++;	
	}
      else{
	unite(x,y);
	unite(x+N,y+N);
	unite(x+N*2,y+N*2);
      }
      
    }else{
      if(same(x,y)||same(x,y+2*N)){
	  ans++;	
	}else{
	  unite(x,y+N);
	  unite(x+N,y+2*N);
	  unite(x+2*N,y);
      }
    }
  }
  cout<<ans<<endl;  
}
int main(){
  scanf("%d %d",&N,&K);
  for(int i=0;i<K;i++){
    scanf("%d %d %d",&T[i],&X[i],&Y[i]);
    //DEBUG(T[i]);
    // DEBUG(X[i]);
  } 

  solve();

}
