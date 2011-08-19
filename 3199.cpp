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
string mul(string N,string carry,string ans)
{
  //  ans[0]=(((ans[0]-'0')+(N[0]-'0'))%10)+'0';  

  for(int i=0;i<(int)ans.size();i++){
    carry[i+1]=(ans[i]-'0'+N[i]-'0')/10;
    ans+='0';
    ans[i]=(((ans[i]-'0')+(N[i]-'0')+(carry[i]-'0'))%10)+'0';  

    }
      
//     DEBUG(ans[i]);
//     DEBUG(carry[i]);

  
  return ans;
  
}


int main()
{
  char N;
  int D;
  //  int dig=N.size();
  
  while(cin>>N>>D){
  string ans=N;
  string carry="0000000000000000000000000000";
  
    if(N=="0"&& D==0) break;
    //  DEBUG(1);
    //    DEBUG(N);


    if(N=="10"){
      cout<<"1";
      for(int i=0;i<D;i++){
	cout<<"0";
      }
      puts("");
      continue;
      
    }
    
    for(int i=0;i<D;i++){
      DEBUG(ans);
      ans=mul(N,carry,ans);
    }
    
    cout<<ans<<endl;
    
  }
  
  return 0;
  
}

