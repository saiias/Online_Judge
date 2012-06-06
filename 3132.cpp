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
#include<sstream>
#include<map>
#include<set>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
#define isValid(x,y,p,q) (x>=0 && x<p &&y>=0 && y<q)

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
bool prime[1121];
int dp[20][1121];
int prime_index = 0;
int prime_box[1121];

///////////////////////////////////////////////////////////////
int main(){
  prime[0]=true;
  prime[1]=true;
  for(int i  =2;i<1121;++i){
    if(prime[i]) continue;
    for(int j = i*2;j<1121;j+=i) prime[j] = true;
  }
  

//  memset(prime_box,1121,0);
  
  REP(i,1121){
    if(!prime[i]){
      prime_box[prime_index++] = i;
    }
    
    
  }

  dp[0][0] = 1;
//  DEBUG(prime_index);
  REP(p,prime_index){
    for(int  k = 14;k>0;k--){
      for(int i = prime_box[p];i<1121;i++){
        dp[k][i] +=dp[k-1][i-prime_box[p]];
      }
    }
  }

  int n,k;
  
  while(cin>>n>>k){
    if(n==0&&k==0) break;
    cout<<dp[k][n]<<endl;
  }
  return 0;
}

