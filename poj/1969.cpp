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
  int t;
  while(cin>>t){
    int c=1,p=1;
    REP(i,t-1){
      if(c==1&&p%2 ==1) p++;
      else if(p ==1 && c%2 == 0) c++;
      else if(p+c&1) c++,p--;
      else --c,++p;
    }
    cout<<"TERM "<<t<<" IS "<<c<<'/'<<p<<endl;
  }
    
    
    return 0;
  
}

