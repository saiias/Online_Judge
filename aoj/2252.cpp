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
int ans;
int tempans;

///////////////////////////////////////////////////////////////
int swap(char in)
{
  if('h'<=in&&in<='p'){
    return 1;
  }
  else if(in == 'y'||in == 'u'){
    return 1;
  }else{
    
  
  return 0;
  }
  return 0;
  
}

int main(){
  string in;
  while(cin>>in){
    if(in == "#") break;
    ans = 0;
    tempans = 0;
    REP(i,in.length()-1){
      int a = swap(in[i]);
      int b = swap(in[i+1]);
      if(a^b) ++ans;
    }
    cout<<ans<<endl;
    
  }
  return 0;
  
}

