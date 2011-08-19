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
int N,Q;
int M;
vector<int> Date(100);
int main(){
  while(1){
    fill(Date.begin(),Date.end(),0);
    scanf("%d %d",&N,&Q);  
    if(N==0&&Q==0) break;

    for(int i=0;i<N;i++){
      scanf("%d ",&M);
      //      DEBUG(M);
      for(int j=0;j<M;j++){
	int temp;
	scanf("%d ",&temp);
	Date[temp]++;
      }
    }
    int ans=0;
    int m=0;
    for(int i=0;i<100;i++){
      if(Q<=Date[i]&&m<Date[i]){
	ans=i;
	m=Date[i];
      }
    }
    cout<<ans<<endl;
  }
}
