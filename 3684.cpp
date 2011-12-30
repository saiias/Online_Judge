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

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
#define MAX_N 100
///////////////////////////////////////////////////////////////
int N,H,R,T;
double y[MAX_N];
const double g = 10.0;

double cals(int T)
{
  if(T<0) return H;
  double t = sqrt(2*H/g);
  int k = (int)(T/t);
  double d;
  if(k%2 ==0){
      d = T-k*t;
      return H-g*d*d/2;

  }else{
      d =k*t+t-T;
      return H-g*d*d/2;

  }
        
}

int main()
{
    int C;
    cin>>C;
    while(C--){
        memset(y,0.0,sizeof(y));
        cin>>N>>H>>R>>T;
        REP(i,N) y[i] =cals(T-i);

        sort(y,y+N);
        REP(i,N) printf("%.2f%c",y[i]+2*R*i/100.0,i+1 == N?'\n':' ');
    }
    return 0;
  
}

