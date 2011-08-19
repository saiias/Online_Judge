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

int main(){
  while(1)
    {
      float a;
      
      scanf("%f",&a);
      
      if(a==0.00) break;
      int ans=0;
      double temp=0;

      for(int i=2;temp<a;i++)
	{
	  temp+=(double)1/i;
	  ans++;
	  
	}
      cout<<ans<<" card(s)"<<endl;
    }
  
}
