#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

#define INF (INT_MAX/10-1)
using namespace std;
///////////////////////////////////////////////////////////////
int T,N;
//vector<int> graph[20];
int mem[10][10];
string dna[10];
vector<int> length(10);


int match(string s1,string s2){
  int len=min(s1.size(),s2.size());
  int point=0;
  for(int i=0;i<=len;i++){
    if(s1.substr(s1.size()-i,i)==s2.substr(0,i)){
      point=i;    
    }
  }
  return point;
}

int len(int np[]){
  //  DEBUG(length[np[0]]);
  int temp=length[np[0]];
  for(int i=0;i<N-1;i++){
    temp +=length[np[i+1]]-mem[np[i]][np[i+1]];  
  }
  //  DEBUG(temp);
  return temp;
}

void solve(){
  for(int i=0;i<N;i++){
    for(int j=0;j<i;j++){
	mem[i][j]=match(dna[i],dna[j]);
	mem[j][i]=match(dna[j],dna[i]);
    }
    length[i]=dna[i].size();
    // DEBUG(length[i]);    
  }

  int np[N];
  
  for(int i=0;i<N;i++){
    np[i]=i;
  }
  
  int  ans=INF;
 do{
   int temp=len(np);
   if(temp<ans){
     ans=temp;
   }
 }while(next_permutation(np,np+N));
 cout<<ans<<endl;
}


int main(){
  scanf("%d",&T);

  for(int i=0;i<T;i++){
    scanf("%d",&N);

    for(int j=0;j<N;j++){
      //	scanf("%s",dns[i]);
      cin>>dna[j];
      //      DEBUG(dna[j]);  
    }
    solve();
  }
}
