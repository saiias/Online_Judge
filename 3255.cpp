xc#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits> 
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
#define MAX_N 100
#define MAX_V 100

using namespace std;
///////////////////////////////////////////////////////////////
int N,R;

vector<int> dist(MAX_N);
vector<int> dist2(MAX_N);


struct edge{int to,cost; };
typedef pair<int,int> P;

vector<edge> G[MAX_V];

int V;

vector<int> d(MAX_V);

void dijkstra(int s){
  priority_queue < P,vector<P>,greater<P> > que;

  fill(d.begin(),d.begin()+V,INF);
  d[s]=0;
  que.push(P(0,s));

  while(que.empty()){
    P p=que.top();
    int v=p.second;
    if(d[v]<p.first){
      continue;
    }

    for(int i =0;i<(int)G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to]>d[v]+e.cost){
	d[e.to]=d[v]+e.cost;
	que.push(P(d[e.to],e.to));      
      }      
    }
  }
}


void solve(){
  priority_queue<P,vector<P>,greater<P> >que;
  fill(dist.begin(),dist.begin()+N,INF);
  fill(dist2.begin(),dist2.begin()+N,INF);
  dist[0]=0;
  que.push(P(0,0));
  while(!que.empty()){
    P p= que.top();
    que.pop();
    int v=p.second,d=p.first;
    if(dist2[v]<d) continue;
    DEBUG((int)G[v].size());
    DEBUG(d);
    for(int i=0;i<(int)G[v].size();i++){
      edge &e=G[v][i];
      int d2= d+e.cost;
      DEBUG(d2);
      if(dist[e.to] > d2){
	swap(dist[e.to],d2);
	que.push(P(dist[e.to],e.to));
      }
    
      if(dist2[e.to] > d2 && dist[e.to] < d2){
	dist2[e.to]=d2;
	que.push(P(dist2[e.to],e.to));
	
      } 
    }
  }
  cout<<dist2[N-1]<<endl;
}

int main(){
  scanf("%d %d",&N,&R);
  while(R--){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    edge x={b,c};
    edge f={a,c};
    G[a].push_back( x );
    G[b].push_back( f) ;
    solve();

}
}
