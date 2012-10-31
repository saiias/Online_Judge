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
#define EPS 1e-9
#define PI 3.14159

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

///////////////////////////////////////////////////////////////
int main(){
  string in;
  while(cin>>in){
    if(in=="ENDOFINPUT") break;
    int x=0,y=0,z=0;
    cin>>x>>y>>z;
    z = min(z,360-z);
    
    if(2*x*PI*(z/180.0)<y*5+EPS){
      cout<<"YES "<<(int)(y-(2*x*(PI*z/180))/5+EPS)<<endl;
    }else{
      cout<<"NO "<<y*5<<endl;
    }
    cin>>in;
  }
  return 0;
}

