#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define MAX_N 10000
using namespace std;
int L,P,N;
vector<int> A(MAX_N+1);
vector<int> B(MAX_N+1);

void solve(){
  A[N]=L;
  B[N]=0;
  N++;

  priority_queue<int> que;
  int ans=0,pos=0,tank=P;
  for(int i=0;i<N;i++){
    //    DEBUG(tank);
    int d=A[i]-pos;
    // DEBUG(d);
    while(tank<d){
      if(que.empty()){
	cout<<"-1"<<endl;
	return;
      }
      tank+=que.top();
      que.pop();
      ans+=1;
      
    }
    tank-=d;
    pos=A[i];
    que.push(B[i]);
  }
  cout<<ans<<endl;
}

int main(){
  vector<int> temp(MAX_N);
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d %d",&temp[i],&B[N-i-1]);
  }
  scanf("%d %d",&L,&P);
  for(int i=0;i<N;i++){
    A[N-i-1]=L-temp[i];
    // cout<<A[i]<<endl;
    //cout<<B[i]<<endl;
}
  solve();
}
