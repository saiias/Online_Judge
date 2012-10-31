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
bool  result = false;
///////////////////////////////////////////////////////////////
int sx,sy;
int gx,gy;
int w,h;
int ac;
void dfs(int i,int j,int island[][110],int flag[][110],int color)
{
  flag[i][j] = 1;  
  if(gx == i && gy == j) result = true;
  for(int x = 0 ; x < 4 ; x++){
    int ax =i+dx[x];
    int ay =j+dy[x];
    
    if(isValid(ax,ay,w+4,h+4) && flag[ax][ay] == 0 && island[ax][ay] ==color){
      dfs(ax,ay,island,flag,color);
    }
  }
}
  
int main(){

  int n;
  
  while(cin>>w>>h,w!=0 || h != 0){
    result = false;
    
    int island[110][110];
    int flag[110][110];
    memset(island,0,110*110);
    memset(flag,0,110*110);    
    cin>>sy>>sx;
    cin>>gy>>gx;
    sx--;
    sy--;
    gx--;
    gy--;    
    cin>>n;

    for(int i = 0 ; i < n ; ++i){
      int c,d,x,y;
      cin>>c>>d>>y>>x;

      if(d == 0){
        for(int a =0 ; a < 2 ; a++){
          for(int b = 0 ; b < 4 ; b++){
            island[x+a-1][y+b-1] = c;
          }          
        }
        
      }
      else{
        for(int a = 0 ; a < 2 ; a++){
          for(int b = 0 ; b < 4 ; b++){
            island[x+b-1][y+a-1] = c;
          }          
        }
        
      }
    }
//     for(int i = 0 ; i< h ; i++){
//         for(int j = 0 ;j<w;j++){
//           cout<<island[i][j]<<" ";
// //          cout<<flag[i][j]<<" ";

//         }
//         cout<<endl;
//       }
//     DEBUG(island[sx][sy]);
//     DEBUG(island[gx][gy]);
    
    int ac = island[sx][sy];
    
    dfs(sx,sy,island,flag,ac);
    
    if(result == true) cout<<"OK"<<endl;
    else cout<<"NG"<<endl;
    
  }
  return 0;  
}

