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
int main(){
  string in;
  while(1){
    cin>>in;
    if(in=="ENDOFINPUT") break;
    int x=0,y=0,z=0;
    cin>>x>>y>>z;
    if(z>=180) z-=180;
    double r = 2*x*3.14159;
    
    if(2*r*(z/360.0)<=y*5){
      cout<<"YES "<<(int)(y-(2*r*(z/360.0))/5)<<endl;
    }else{
      cout<<"NO "<<y*5<<endl;
    }

    cin>>in;
    
    
    
  }
  
  return 0;
  
}

