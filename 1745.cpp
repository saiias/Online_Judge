#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<complex>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////

int main()
{
  int in[10001];
  bool dp[10001][101];
  REP(i,2)REP(j,101) dp[i][j]=false;
  int n,k;
  scanf("%d%d",&n,&k);
  REP(i,n)  scanf("%d",&in[i]);
  dp[0][(in[0]%k+k)%k]=true;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<k;j++){
      if(dp[i][j]){
	dp[i+1][(j+in[i+1]%k+k)%k]=true;
	dp[i+1][(j-in[i+1]%k+k)%k]=true;
      }
    }
    
  }
    
  if(dp[n-1][0]) cout<<"Divisible"<<endl;
  else cout<<"Not divisible"<<endl;
  

  return 0;
  
}

