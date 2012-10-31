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
bool comp(string const&l,string const&r)
{
  string sl,sr;
  REP(i,l.size()) sl+=tolower(l[i]);
  REP(i,r.size()) sr+=tolower(r[i]);

  return sl<sr;
}


int main(){
  string in;
  
  while(getline(cin,in)){
    if(in == ".") break;
    vector<int> n;
    vector<string>w;
    vector<string>result;

    int pos = 0;
    
    while(pos<(int)in.size()){
      string temp;
      while(in[pos] != '.' &&in[pos] !=','){
        temp +=in[pos++];
      }
      stringstream ss(temp);
      int t;
      if(ss>>t)n.push_back(t);
      else w.push_back(temp);
      result.push_back(temp);

      if(in[pos] == '.') break;
      pos+=2;
    }

    pos = 0;
    sort(ALL(n));
    sort(ALL(w),comp);
    
    int i=0,j=0;

    REP(x,n.size()+w.size()){
      if(x) cout<<", ";
      if(isdigit(result[x][0])||result[x][0]=='-') cout<<n[i++];
      else cout<<w[j++];
    }
    cout<<'.'<<endl;
  }
  return 0;
  
}

