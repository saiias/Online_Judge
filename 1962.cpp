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
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;


///////////////////////////////////////////////////////////////
int len[20000];
int x[20000];

int root(int a)
{
  if(a==x[a]) return a;
  return x[a]=root(x[a]);
}


int sz(int a)
{
  int result;
  if(x[x[a]] == x[a]) return len[a];

  len[a] +=sz(x[a]);
  result = len[a];
  x[a] = root(x[a]);
  
  return result;
  
}


int main(){
  int t = 0;
  cin>>t;
  while(t--){
    int n =0;
    memset(x,0,20000);
    memset(len,0,20000);
    cin>>n;
    
    REP(i,n){
      len[i] = 0;
      x[i] = i;
    }
    char p;
    int a = 0;
    int b =0;
    while(cin>>p,p!='O'){
      if(p=='E'){
        cin>>a;
        cout<<sz(a-1)<<endl;
      }
      else if(p=='I'){
        cin>>a>>b;
        a--;
        b--;
        x[a] = b;
        len[a]+=abs(a-b)%1000;
      }
    }
  }
  return 0;
}

