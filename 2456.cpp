#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<complex>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int N,M;
int x[100000];

bool C(int d)
{
  int last = 0;
  for(int i = 1;i<M;i++){
    int crt = last+1;
    while(crt<N && x[crt]-x[last] < d){
      crt++;
      
    }
    if(crt ==N) return false;
    last = crt;
    
  }
  
  return true;
  
}


int main()
{
  scanf("%d%d",&N,&M);
  //  cin>>N>>M;
  //  cout<<N<<M<<endl;
  
  for(int i = 0;i<N;i++){
    scanf("%d",&x[i]);
    
    
  }

  sort(x,x+N);
  int lb =0;
  int ub =INF;

  while(ub-lb>1){
    int mid = (lb+ub)/2;
    if(C(mid)) lb = mid;
    else ub = mid;
  }

  printf("%d\n",lb);
 
  
  
  return 0;
  
}

