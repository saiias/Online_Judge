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
#define isValid(x,y) (x>=0 && x<p &&y>=0 && y<q)

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,1,-2,2,-2,2,-1,1};
int dy[]={-2,-2,-1,-1,1,1,2,2};
int p=0,q=0;
int flag=0;
int visited[50][50];
struct path
{
  int x;
  int y;
} path[50];

  
///////////////////////////////////////////////////////////////
void dfs(int count,int x,int y)
{
  int temp_x = 0;
  int temp_y = 0;
  visited[x][y] = 1;
  path[count].x = x;
  path[count].y = y;
  if(count+1 ==p*q){
    if(!flag){
      flag = 1;
      REP(i,p*q){
        printf("%c%d",'A'+path[i].y,path[i].x+1);
        
      }
      puts("");
      return;
      
    }
  }
  
  if(!flag){
    REP(i,8){
      temp_x=x+dx[i];
      temp_y=y+dy[i];
      if(isValid(temp_x,temp_y) && !visited[temp_x][temp_y]){
        dfs(count+1,temp_x,temp_y);
      }
    }
  }
  visited[x][y] = 0;
}

void solve()
{
  memset(visited,0,sizeof(visited));
  REP(i,50) path[i].x=0,path[i].y=0;
  
  flag =0;
  REP(i,p)REP(j,q){
    if(!flag) dfs(0,i,j);
  }

  if(!flag){
    cout<<"impossible"<<endl;
  }
  
    
}

int main(){
  int N;
  cin>>N;
  for(int i = 1 ;i<=N;i++){
    
    cin>>p>>q;
    cout<<"Scenario #"<<i<<":"<<endl;
    solve();
    
    if(i!=N) puts("");
    
  }
    return 0;
}

