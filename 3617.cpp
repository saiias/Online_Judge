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
#define MAX_N 10000
int c=0;

int N;
char S[MAX_N];
void solve(){
  int a=0;
  int b=N-1;
  while(a<=b){
    bool left = false;
    for(int i=0;a+i<b;i++){
      if(S[a+i]<S[b-i]){
	left=true;
	break;
      }
      else if(S[a+i]>S[b-i]){
	left=false;
	break;
      }
    }

      if(left) putchar(S[a++]);
      else putchar(S[b--]);
      
      c++;	
      if(c==80) {
      cout<<endl;
      c=0;
    }
    

  }
    cout<<endl;

}

  int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++){
      scanf("%s",&S[i]);
}
    //    DEBUG(S[N-1]);

    solve();

}
