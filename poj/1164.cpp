#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int MAP[102][102];
int H,W,roomcount,roommax;
#define REP(i,x)for(int i=0;i<(int)x;i++)
int dx[4]={2,0,-2,0},dy[4]={0,2,0,-2};
int BFS(int x,int y){

  typedef pair<int,int> P;
	queue<P> que;
	que.push(P(x,y));
	MAP[x][y]=2;
	int ans=1;
	while(!que.empty()){
		P t=que.front();que.pop();
		x=t.first,y=t.second;
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx>=0&&nx<W*2&&ny>=0&&ny<H*2){
				int mx=(nx+x)/2;
				int my=(ny+y)/2;

				if(MAP[mx][my]==0&&MAP[nx][ny]==0){

				  MAP[nx][ny]=2;
					ans++;
					que.push(P(nx,ny));
				}
			}
		}
	}
	return ans;
}
int main() {
	cin>>H>>W;
	REP(y,H){
		REP(x,W){
			int t;
			cin>>t;
			int tx=x*2+1,ty=y*2+1;
			if(t&1){
				MAP[tx-1][ty]=1;
			}
			if(t&2){
				MAP[tx][ty-1]=1;
			}
			if(t&4){
				MAP[tx+1][ty]=1;
			}
			if(t&8){
				MAP[tx][ty+1]=1;
			}
		}
	}
	REP(y,H){
		REP(x,W){
			if(MAP[x*2+1][y*2+1]==0){
			  roomcount++;
			  roommax=max(roommax,BFS(x*2+1,y*2+1));
			}
		}
	}
	cout<<roomcount<<endl<<roommax<<endl;
	return 0;
}
