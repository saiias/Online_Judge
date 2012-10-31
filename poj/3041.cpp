#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////
int N,K;
int  g[501][501];
vector<int> column(1000);
vector<int> row(1000);

int main(){
  memset(g,0,sizeof(g));
  scanf("%d %d",&N,&K);
  for(int i=0;i<K;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    g[a][b]=1;
    row[a]+=1;
    column[b]+=1;

  }
  
  
}
