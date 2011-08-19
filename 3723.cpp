#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#include<climits>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define MAX_E 10000
#define MAX_N 20000
#define MAX_R 50000
using namespace std;
///////////////////////////////////////////////////////////////
int T;
int N,M,R;
int par[MAX_N];
int rank[MAX_N];
struct edge{int u,v,cost;};

edge es[MAX_E];
int V,E;


void init(int n){
  for(int i=0;i<n;i++){
    par[i]=i;
    rank[i]=0;
  }
}

int find(int x){
  if(par[x]==x){
    return x;
  }else{
    return par[x]=find(par[x]);
  }
}

void unite(int x,int y){
  x=find(x);
  y=find(y);
  if(x==y) return;

  if(rank[x]<rank[y]){
    par[x]=y;  
  }else{
    par[y]=x;
    if(rank[x] == rank[y]) rank[x]++;
  }
}

bool same(int x,int y){
  return find(x)==find(y);
}

bool comp(const edge& e1,const edge& e2){
  return e1.cost< e2.cost;
}


int kruskal(){
  sort(es,es+E,comp);
  init(V);
  int res =0;
  for(int i=0;i<E;i++){
    edge e=es[i];
    if(!same(e.u,e.v)){
      unite(e.u,e.v);
      res +=e.cost;
    }
  }
  return res;
}

int X[MAX_R],Y[MAX_R],D[MAX_R];

void solve(){
  V=N+M;
  E=R;
  for(int i=0;i<R;i++){
    es[i]=(edge){X[i],N+Y[i],-D[i]};  
  }
  cout<<10000*(N+M)+kruskal()<<endl;
}

int main(){
  memset(X,0,sizeof(X));
  memset(Y,0,sizeof(Y));
  memset(D,0,sizeof(D));

  scanf("%d",&T);
  for(int i=0;i<T;i++){
    scanf("%d %d %d",&N,&M,&R);
    //    DEBUG(R);
    for(int j=0;j<R;j++){
      int a,b,c;
      scanf("%d %d %d",&a,&b,&c); 
      X[j]=a;
      Y[j]=b;
      D[j]=c;   
    }
  solve();

  }
}
