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
#define INF 100000
#define MAX_N 16
using namespace std;
///////////////////////////////////////////////////////////////
int d[MAX_N+1][MAX_N+1];
int memo[1 << MAX_N];
int main(){
  while(1)
    {
      int n;
      scanf("%d",&n);
      if(n==0) break;
      
      
      for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j < n; j++)
	    {
	      scanf(" %d",&d[i][j]);
	    }
	}

      for(int i=0;i< 1<<n;i++)
	{
	  memo[i]=INF;
	}

      memo[0]=0;
      
      for(int i=0;i< 1<<n;i++)
	{
	  for(int j=0;j<n;j++)
	    {
	      if((i& (1<<j))==1) continue;
	      memo[i+(1<<j)]=min(memo[i+(1<<j)],memo[i]+d[j][0]);
	      for(int m=0;m<n;m++)
		{
		  if(i&(1<<j)==0) continue;
		  memo[i+(1<<j)]+=min(memo[i+(1<<j)],memo[i]+d[j][m+1]);
		}
	    }
	}
      
      cout << memo[(1<<n)-1] <<endl;
      
    }
      
      



}
  
