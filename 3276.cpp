#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
#define MAX_N 5000
using namespace std;
///////////////////////////////////////////////////////////////
int N;
char s[MAX_N];
int dir[MAX_N];
int f[MAX_N];


int calc(int K)
{
  memset(f,0,sizeof(f));
  int res=0;
  int sum  =0;
  for(int i =0;i+K<=N;i++)
    {
      if((dir[i]+sum)%2 !=0)
	{
	  res ++;
	  f[i]= 1;
	}
      sum +=f[i];
      if(i-K+1>=0)
	{
	  sum -=f[i-K+1];
	}
      
  }
  

  for(int i=N-K+1;i<N;i++)
    {
      if((dir[i]+sum)%2 !=0)
	{
	  return -1;
	}
      if(i-K+1 >=0)
	{
	  sum -=f[i-K+1];
	}
      

    }
  return res;
  

}

void solve()
{
  int K=1;
  int M=N;
  for(int k=1;k<=N;k++)
    {

      int m =calc(k);
      //	  DEBUG(k);

      if(m>=0 && M>m)
	{
	  M=m;
	  K=k;
	  
	}
    }
  printf("%d %d\n",K,M);
}



int main(){

  cin>>N;
  for(int i =0; i < N; i++)
    {
      cin>>s[i];
      if(s[i]=='F') dir[i]=0;
      else dir[i]=1;
      //DEBUG(dir[i]);
      
    }


  solve();
  
  return 0;
  

}




