#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>
#include<cmath>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int N;
int K;
double L[10000];

bool C(double x)
{
  int num=0;
  
  for(int i=0;i<N;i++)
    {
      num +=(int)(L[i]/x);
      
    }
  return num>K;
  
  
}


int main(){
  scanf("%d %d",&N,&K);
  for(int i=0;i<N;i++)
    {
      scanf("%lf",&L[i]);
    }

  double s=0;
  double f=INF;
  
  for(int i=0;i<1000;i++)
    {
      double temp =(s+f)/2;
      if(C(temp)) s=temp;
      else f=temp;
      
      
  }
  
  printf(".2lf/n",floor(s*100/100));
  
}
