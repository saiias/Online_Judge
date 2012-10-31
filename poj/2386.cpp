#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
#define MAX_N 100
#define MAX_M 100

int n,m;
char maze[MAX_N][MAX_N];


void dfs(int i,int j){
  maze[i][j]='.';

  for(int x=-1;x<=1;x++){
    for(int y=-1;y<=1;y++){
      int dx=i+x;
      int dy=j+y;
      if(dx<n && 0<=dx && dy <m && 0<=dy &&maze[dx][dy]=='W') dfs(dx,dy);	
    }
  }
  return;
  
}

void solve(){
  int ans=0;
  REP(i,n) REP(j,m){
    if(maze[i][j]=='W'){    
      dfs(i,j);
      ans++; 
    }
    // DEBUG(ans);
 }
  cout<<ans<<endl;
}
int main(){
    scanf("%d %d",&n,&m);
  // cin>>n>>m;  
    // DEBUG(n);
    //  DEBUG(m);  
  //  char a;
  REP(i,n) REP(j,m) {
    // DEBUG(j);
    scanf(" %c",&maze[i][j]);
    //    DEBUG(a);
    //  maze[i][j]=a;
    //  DEBUG(i);
    //DEBUG(j);
    //   DEBUG(maze[i][j]);  
    
  }
  solve();
  
  return 0;
}

