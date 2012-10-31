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
using namespace std;
///////////////////////////////////////////////////////////////
int n;

int main(){
  while(1)
    {
      scanf("%d",&n);
      if(n==0) break;
      int temp=n;
      int temp1;
      
      for(int i=1;i<=temp;i++)
	{
	  temp-=i;
	  temp1=i;
	}
      int ans=0;
//       DEBUG(temp1);
//       DEBUG(temp);
      
      for(int i=1;i<=temp1;i++)
	{
	  ans+=i*i;
	}
      
      for(int i=0;i<temp;i++)
	{
	  ans+=temp1+1;
	  
	}
      
      cout<<n<<" "<<ans<<endl;
      
    }
      


}
  
