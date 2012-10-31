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
int main(){
  int t=0;
  cin>>t;
  double kaiji =0;
  double hantyo = 0.0;
  while(t--){
    int n=0;
    int m=0;
    cin>>n>>m;
    double temp = 0;
    double kakuritu =0;
    while(m--){
      int a=0;
      double b=0.0;
      cin>>a>>b;
      temp +=a*b;
      kakuritu+=b;
    }
    kaiji =max(kaiji,temp/kakuritu);
    
  }
  int p=0,q=0;
  cin>>p>>q;
  double hantyo_kakuritu = 0;
  while(q--){
    int c =0;
    double d =0.0;
    cin>>c>>d;
    hantyo +=c*d;
    hantyo_kakuritu +=d;
  }
  hantyo /=hantyo_kakuritu;
    if(kaiji>hantyo+0.0000001) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
  
}

