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
#include<string>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
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
string in[1001];
string ss;
int n=0;

///////////////////////////////////////////////////////////////
bool check(string  &s,int id)
{
  REP(i,n){
    if(i ==id) continue;
    string temp = in[i].substr(0,s.length());
    if(s == temp) return false;
  }
  return true;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  while(cin>>in[n]){
    n++;
  }
  REP(i,n){
    string temp = "";
    REP(j,in[i].size()){
      temp+=in[i][j];
      if(check(temp,i)) break;
    }
    cout<<in[i]<<" "<<temp<<endl;
  }
  return 0;
}

