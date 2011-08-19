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

double  sum;
int main(){
  for(int i=0;i<12;i++)
    {
      double temp;
  
      
      scanf("%lf",&temp);
      sum+=temp;
      
    }
  

  cout<<"$"<<sum/12<<endl;
  

}

