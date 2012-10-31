#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
#define MAX_N 1000
#define MAX_M 10000
#define MAX_T 1260

int N,M;
int r;
int start[MAX_T+1][MAX_M+1];

int main(){

  while(1){
    //DEBUG(1111);
   
  scanf("%d %d",&N,&M);

  if(N==0&&M==0) break;


  scanf("%d",&r);
  memset(start,0,sizeof(start));

  //  DEBUG(r);

  //  memset(memo,0,sizeof(memo));
  
  for(int i=0;i<r;i++){
    int t,n,m,s;
    scanf("%d %d %d %d",&t,&n,&m,&s);
    // DEBUG(t);

    if(s==1) {    
      start[t][n]=m;    
    }
    else{
	t--;
	while(start[t][n]!=m&&t>540){
	  
	  start[t--][n]=m;
	  //	  if(m==1) DEBUG(t);
	//	DEBUG(memo[t][m]);
	  
	}
    }
  }
  

  int q=0;
  scanf("%d2",&q);

  for(int i=0;i<q;i++){
    //DEBUG(q);

    int ts,te,ms;
    int ans=0;
    scanf("%d %d %d",&ts,&te,&ms);
    for(int t=ts;t<te;t++){
      for(int n=1;n<=N;n++){
	if(start[t][n]==ms){
	  // 	if(ms==1) DEBUG(t);
	ans++;
	break;
	}
	//   DEBUG(ms);    
	
	// DEBUG(te);
      }
    }
    cout<<ans<<endl;
  }
  }
}
