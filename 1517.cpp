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
  cout<<"n e"<<endl;
  cout<<"_ ___________"<<endl;
  double a =1.0;
  double b = 0.0;
  REP(i,10){
    int temp;
    if(i==0) temp = 1;
    else temp *=i;

    a=1.0/temp;
    b+=a;
    printf("%d %.10g\n",i,b);
  }
  
  
    return 0;
  
}

