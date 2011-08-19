#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>
//#include<cmath>

#define M_PI 3.14
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
int N;

int main(){
  scanf("%d",&N);
  for (int i = 0; i < N; ++i)
    {
      double x,y;
      cin>>x>>y;
      double temp=(x*x+y*y);
      int a=0;
      int ans=0;
      
      while(1)
	{
	  a+=100;
	  double b;
	  b=a/M_PI;
	  ans ++;

	  if(b>temp) break;
	  
	}
      //    DEBUG(ans);
      
      cout<<"Property "<<i+1<<": This property will begin eroding in year "<<ans<<"."<<endl;
      
      
      
    }
  cout<<"END OF OUTPUT."<<endl;
  
  
}
