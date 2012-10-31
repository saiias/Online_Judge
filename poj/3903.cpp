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

int n;

///////////////////////////////////////////////////////////////
int main(){
int in[1000000];

while(~scanf("%d",&n)){
    vector<int> dp(1000000,INF);
    vector<int> id(1000000);
    REP(i,n) cin>>in[i];
    REP(i,n){
      id[i] =distance(dp.begin(),lower_bound(ALL(dp),in[i]));
      dp[id[i]] = in[i];
    }
    cout<<(*max_element(ALL(id))+1)<<endl;
  }
  
  return 0;
  
}

