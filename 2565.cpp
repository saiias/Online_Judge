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

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int main()
{
  int n;
  double d;
  cin>>n>>d;
  int t;
  char str[10];
  
  while(~scanf("%d",&t)){
    int sum =0;
    bool flag =false;

    printf("%3d: ",t);
    
    for(int i=0;i<n;i++){
      int h,m,s;
      scanf("%s",str);

      if(str[0]=='-'){
	flag = true;
      }
      h =str[0]-'0';
      m =(str[2]-'0')*10+(str[3]-'0');
      s =(str[5]-'0')*10+(str[6]-'0');
      
      sum += h*3600+m*60+s;      
    }
    if(flag){
      printf("-\n");
    }else{
      int ans = round(sum/d);
      printf("%d:%02d min/km\n",ans/60,ans%60);
    }
    
    
    
    
  }
  
  return 0;
  
}

