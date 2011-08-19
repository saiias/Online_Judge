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
int maze[21][21];
int w,h;
int sx,sy;
int gx,gy;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int ans;

void  solve(int n,int x,int y){
  if(n>=ans) {return;}

  for(int i=0;i<4;i++){
    int mx=x,my=y;
    mx+=dx[i];
    my+=dy[i];

    if(mx<0||mx>=w || my<0 ||my>=h )  {continue;} 
    if(maze[mx][my]==1) {continue;}
    
    while(1){
      if(maze[mx][my]==3){
	ans =n;
	return;
      }   
     mx+=dx[i];
     my+=dy[i];

      if(mx<0||mx>=w || my<0 ||my>=h )  {break;} 
      
      if(maze[mx][my]==1){
	maze[mx][my]=0;
	solve(n+1,mx-dx[i],my-dy[i]);
	maze[mx][my]=1;
	break;
      }
    }
  }
  
} 


int main(){
  while(1){
    scanf("%d %d",&w,&h);
    int sx,sy;
    int gx,gy;
    if(!w && !h) break;

    REP(i,h) REP(j,w) {
      scanf(" %d",&maze[i][j]);
      if(maze[i][j]==2){
	sx=i;
	sy=j;
      }
      if (maze[i][j]==3){
	gx=i;
	gy=j;
      }
    }

    ans=11;
    solve(1,sx,sy);
    if(ans>10) ans=-1;
    cout<<ans<<endl;

    

  
}
}
