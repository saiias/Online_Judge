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
  int n,m,p;
  while(cin>>n>>m>>p,n||m||p){
    int win =0;
    int x[100];
    int ans = 0;
    for(int i = 1;i<=n;++i){
      cin>>x[i];
      ans+=x[i];
    }
    ans*=100;
    if(x[m] == 0) cout<<x[m]<<endl;
    else{
      ans=ans*(100-p)/100;
      int temp = ans/x[m];
      cout <<temp<<endl;
    }
  }
  
  return 0;
  
}

