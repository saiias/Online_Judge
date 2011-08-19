#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
#define MAX_N 10000
int N,R;
int X[MAX_N];


void solve(){
  sort(X,X+N);

  int i=0;
  int ans=0;
  while(i<N){
    int s=X[i++];
    while(i<N&&X[i]<=s+R){
      i++;
    }
    int p=X[i-1];
    while(i<N&&X[i]<=p+R) i++;

    ans++;
  }
  cout<<ans<<endl;

}
int main(){
  while(1){
  scanf("%d %d",&R,&N);
  if(R==-1&&N==-1)break;
  
  for(int i=0;i<N;i++){
    scanf(" %d",&X[i]);
  }

  solve();

}

}
