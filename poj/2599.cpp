#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define MAX_N 1000
using namespace std;
///////////////////////////////////////////////////////////////
bool visited[MAX_N];
vector<int> graph[MAX_N];
int N,K;

bool dfs(int x){
  visited[x]=true;
  for(unsigned int i=0;i<graph[x].size();i++){
    if(!visited[graph[x][i]]){
      if(!dfs(graph[x][i])){
      return true;
	}
      // return false;
  }

    // return false;
  }
  return false;
}

void solve(){
   K--;
  visited[K]=true;
  sort(graph[K].begin(),graph[K].end());
  for(unsigned int i=0;i<graph[K].size();i++){
    if(!dfs(graph[K][i])){
      cout<<"First player wins flying to airport "<<graph[K][i]+1<<endl;
      return ;
    }
  }
  cout<<"First player loses"<<endl;
  return;
}
int main(){
  scanf("%d %d",&N,&K);
  for(int i=0;i<N;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    graph[a-1].push_back(b-1);
    graph[b-1].push_back(a-1);
}
  solve();

}
