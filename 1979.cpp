#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
char maze[20][20];
bool memo[20][20];
int W,H;
int sx,sy;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int ans;

  
    

 
    
void dfs(int x,int y)
{
//   DEBUG(ans);
//   DEBUG(x);
//   DEBUG(y);
  
  memo[x][y]=true;
  ans++;
  
  for(int i=0;i<4;i++)
    {
      int a=x+dx[i];
      int b=y+dy[i];
      
      if(0<=a && a<W && 0<=b && b < H && maze[a][b]!='#' && !memo[a][b])
	{
	  dfs(a,b);
	  
	}
    }


}


int main(){
  while(1)
    {
     ans=0;
      
      scanf("%d %d",&W,&H);
      if(W+H==0) break;
  
      for(int j=0;j<H;j++)
	{
	  for(int i=0;i<W;i++)
	    {
	      scanf(" %c",&maze[i][j]);
	      memo[i][j]=false;
	  
	      if(maze[i][j]=='@')
		{
		  sx=i;
		  sy=j;
		}
	    }
	}

      dfs(sx,sy);
      cout<<ans<<endl;
	

    }

  
}
