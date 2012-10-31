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
  int n,k;
  int in[1000];

  while(cin>>n>>k,n){
    memset(in,0,1000);
    int t_max = 0;
    int s_max  = 0;

    REP(i,n) cin>>in[i];
    REP(i,n-k+1){
      int t = 1;
      REP(j,k) t *=in[i+j];
      t_max = max(t_max,t);      
    }
    REP(i,n) REP(j,i){
      swap(in[i],in[j]);
      REP(x,n-k+1){
        int t =1;
        REP(y,k) t *= in[x+y];
        s_max = max(s_max,t);
      }
      swap(in[i],in[j]);
    }
    if(t_max > s_max) cout<<"NO GAME"<<endl;
    else cout << s_max - t_max<<endl;
    
  }
  return 0;
  
}

