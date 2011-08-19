#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cmath>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////
#define MAX_M 30

//int time[MAX_M][MAX_M];

int Ticket[8];

struct Edge{
  int to;
  int cost;
  //  int cost;
};

struct State{
  int v,to;
  double d;

  bool operator<(const State &s)const{
  return  d>s.d;
  }
};


vector<Edge> gragh[30];

double dp[30][1<<8];



bool dijkstra(int s,int t,int n){
  dp[s][(1<<n)-1]=0;

  priority_queue<State> pq;
  pq.push((State){s,(1<<n)-1});

  while(!pq.empty()){

  }


}

int main(){
  while(1){
    int n,m,p,a,b;
    scanf("%d %d %d %d %d",&n,&m,&p,&a,&b);
    
    if(!n&&!m&&!p&&!a&&!b) break;

    vector<int> t;
    vector<int> graph[MAX_M];

    for (int i = 0; i < n; ++i)
      {
	scanf("%d",&Ticket[i]);
      }

    for (int i = 0; i < p; ++i)
      {
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	graph[x-1][y-1]=z;
	graph[y-1][x-1]=z;
      }


  }
}
