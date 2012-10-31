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

int main(){
  while(1){
    int maze[1001][1001];
    memset(maze,0,sizeof(maze));
    int N;
    int W,H;
    scanf("%d",&N);
    //    DEBUG(N);
    if(N==0) break;

    scanf("%d %d",&W,&H);
    for(int i= 0;i<N;i++){
      int x,y;
      scanf("%d %d",&x,&y);
      //    DEBUG(x-1);
      //    DEBUG(y-1);
      maze[x-1][y-1]=1;
    }
    int S,T;
    int ans=0;
    scanf("%d %d",&S,&T);
    for(int i=0;i+S<=W;i++){
      for(int j=0;j+T<=H;j++){
	int temp1=0;
	for(int x=0;x<S;x++){
	  for(int y=0;y<T;y++){
	    if(maze[x+i][y+j]==1){
	      // DEBUG(i+x);
	      //DEBUG(j+y);
	      temp1++;
	    }
	  }
	}
	//	DEBUG(i);
	//	DEBUG(j);
   	//  DEBUG(temp1);
  	ans=max(ans,temp1);
      }
    }

    cout<<ans<<endl;
    // DEBUG(1); 
  }
}
