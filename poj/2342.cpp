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
vector<int> G[6000];  
vector<int> T;

P dfs(int v)
{
  if(G[v].size() == 0) return make_pair(T[v],0);
  P ret(T[v],0);
  REP(i,G[v].size()){
    P temp = dfs(G[v][i]);
    ret.first +=temp.second;
    ret.second+=max(temp.first,temp.second);
  }
  return ret;
}


int main(){
  int n;
  cin>>n;
  set<int> app;
  REP(i,n){
    int temp;
    cin>>temp;
    T.push_back(temp);
    app.insert(i);
  }
  int l,k;
  while(cin>>l>>k,l){
    G[k-1].push_back(l-1);
    app.erase(l-1);
  }
  P rlt = dfs(*app.begin());
  cout<<max(rlt.first,rlt.second)<<endl;
  
  return 0;
  
}

