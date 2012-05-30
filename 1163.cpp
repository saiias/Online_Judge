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
  
///////////////////////////////////////////////////////////////
int main(){
  int n;
  cin>>n;
  
  vector<int>dp;
  int a =0;
  cin>>a;
  dp.push_back(a);
  int result = 0;
  
  for(int i = 2;i<=n;++i){
    vector<int> temp;
    for(int j  = 0;j<i;++j){
      int t =0;
      cin>>t;
      int sum = 0;
      if(j){
        sum = max(sum,t+dp[j-1]);
      }
      if(j<i-1){
        sum = max(sum,t+dp[j]);
      }
      temp.push_back(sum);
      result = max(result,sum);
    }
    swap(dp,temp);
  }
  cout<<result<<endl;
  return 0;
  
}

