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
int maze[100][100];

///////////////////////////////////////////////////////////////
int main(){
  int t=0;
  
  while(cin>>t,t){
    REP(i,t)REP(j,t){
      cin>>maze[i][j];
    }
    int odd = 0;
    int tx = -1;
    int ty = -1;
    
    REP(i,t){
      int sum = 0;
      REP(j,t){
        sum +=maze[i][j];
      }
      if(sum%2 == 1){
        odd++;
        tx =i+1;
      }
      sum = 0;
      REP(j,t){
        sum +=maze[j][i];
      }
      if(sum%2 == 1){
        odd++;
        ty =i+1;
      }
      
    }

    if(odd == 0) cout<<"OK"<<endl;
    else if (odd == 2&&~tx&&~ty) cout <<"Change bit (" << tx<<","<<ty<<")"<<endl;
    else cout<<"Corrupt"<<endl;
    
     
    
  }
  
  return 0;
  
}

