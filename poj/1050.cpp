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
int MAP[101][101];
int S1[101][101];
int S2[101][101];
int H,W;
int N;
int ans;

///////////////////////////////////////////////////////////////
int cumsum(int x1,int y1,int x2,int y2)
{
  return S2[x2][y2]+S2[x1][y1]-S2[x1][y2]-S2[x2][y1];
}

int main(){
  //累計和
  cin>>N;
  H=W=N;
  REP(j,H){
    S1[0][j]=0;
    REP(i,W){
      cin>>MAP[i][j];
      S1[i+1][j] =S1[i][j] + MAP[i][j];
    }
  }
  
  
   
  REP(j,H+1){
    S2[j][0] = 0;
    REP(i,W+1){
      S2[j][i+1] = S2[j][i] + S1[j][i];
    }
  }
  // REP(j,H){
  //   REP(i,W+1) cout<<S1[i][j]<<" ";
  //   cout<<endl;
  // }

  REP(y1,H){
    for(int y2 = y1+1;y2<=H;y2++){
      REP(x1,W){
        for(int x2 = x1+1;x2<=W;x2++){
          ans = max(ans,cumsum(x1,y1,x2,y2));
        }
      }
    }
  }
  cout<<ans<<endl;
    return 0;
  
}

