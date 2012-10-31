#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////
int N;
char maze[10][10][10];
bool memo[10][10][10];
string S;
char E[5];

int dx[6]={-1,0,0,1,0,0};
int dy[6]={0,-1,0,0,1,0};
int dz[6]={0,0,-1,0,0,1};
int sx,sy,sz;
int gx,gy,gz;

struct pos{
  int x;
  int y;
  int z;
  int ans;
};

queue<pos> q;


bool bfs(pos p){
  //  q.pop();

  if(p.x==gx && p.y==gy && p.z==gz){
    return true;
  }
//   if(!memo[p.x][p.y][p.z]){
//       return false;
//    }
//   if(maze[p.x][p.y][p.z]=='X'){
//     return false;
//   }
//  memo[p.x][p.y][p.z]=true;
  for(int i=0;i<6;i++){
    if(0<=p.x+dx[i] && p.x+dx[i]<N &&
       0<=p.y+dy[i] && p.y+dy[i]<N
       && 0<=p.z+dz[i] && p.z+dz[i]<N &&
       !memo[p.x+dx[i]][p.y+dy[i]][p.z+dz[i]] &&
       maze[p.x+dx[i]][p.y+dy[i]][p.z+dz[i]]!='X'){
      pos S1={p.x+dx[i],p.y+dy[i],p.z+dz[i],p.ans+1};
// 	    DEBUG(p.x+dx[i]);
// 	    DEBUG(p.y+dy[i]);
// 	    DEBUG(p.z+dz[i]);	  
      memo[p.x+dx[i]][p.y+dy[i]][p.z+dz[i]] =true;
	    q.push(S1);
	}
  }  
  return false;
}


int main(){
  while(cin>>S>>N){
    memset(memo,false,sizeof(memo));
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
	for(int m=0;m<N;m++){
	  scanf(" %c",&maze[m][j][i]);
	}      
      }
    }
    scanf("%d %d %d",&sx,&sy,&sz);
    scanf("%d %d %d",&gx,&gy,&gz);
    bool f=false;
    pos s={sx,sy,sz,0};
    q.push(s);
    memo[sx][sy][sz]=true;
    while(!q.empty()){
	pos temp=q.front();
	q.pop();
	if(bfs(temp)){
	  f=true;
	  cout<<N<<" "<<temp.ans<<endl;
	    
	  while(!q.empty()){
	      q.pop();
	    }
	    
	break;
	  }
      //      DEBUG(q.size());
      
    }
    if(!f) cout<<"NO ROUTE"<<endl;
    // DEBUG(q.size());
    scanf("%s",E);
  }
}
