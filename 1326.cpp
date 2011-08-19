#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
// int round(double x)
// {
//   return (x - 0.5 == floor(x)) ? 2 * floor(x / 2.0 + 0.5) : floor(x + 0.5);
// 

int main(){
//int b;
    
  
  int ans=0;
 
  while(1)  {
  int a=0;
  char s1[100];
  char c[1];
  //  DEBUG(ans);
  
  scanf("%s",s1);
    if(s1[0]=='0') 
      {
	cout<<ans<<endl;	
	ans=0;
	a=0;
	//	DEBUG("11111");
	
	continue;
      }
    if(s1[0]=='#') 
      {
	break;
      }    
    scanf("%s",s1);
    scanf("%d",&a);
    //    scanf("%d",&b);
    scanf("%s",c);
    //        DEBUG(a);
    
    
     if(c[0]=='F')
      {
	ans+=a*2;
      }
     else if(c[0]=='B')
       {if(a%2==1)	ans+=a+(a/2)+1;
	 else
	   {
	     ans+=a*1.5;
	     
   }
	 
      }else
       {
	if(a<500) a=500;
	 ans+=a;
       }
     
    }
  
}
