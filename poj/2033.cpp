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
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int dp[500];

int main()
{
  char s[500];
  while(1){
    cin>>s;
    if(s[0]=='0') break;
    memset(dp,0,500);
    int l = strlen(s);
    dp[0]=1;
    int temp=(s[0]-'0')*10+(s[1]-'0');
    if(temp>0 && temp<=26){
        dp[1]=2;
    }else{
        dp[1]=1;
    }
//    DEBUG(dp[0]);
//    DEBUG(dp[1]);
    for(int i = 2;i<l;i++){
        int temp = (int)(s[i-1]-'0')*10+(int)(s[i]-'0');
        if(s[i]=='0') dp[i]=dp[i-2];
        else if(temp>0&&temp<=26&&s[i-1]!='0'){
            dp[i]=dp[i-1]+dp[i-2];

//	DEBUG(temp);
        }else{
            dp[i]=dp[i-1];
                    
        }
    }
    cout<<dp[l-1]<<endl;
    
  }
  return 0;
}

