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
///////////////////////////////////////////////////////////////
int main()
{
  int n;
  int x[200];
  int y[200];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
  }

  int ans=2;

  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      int dx=x[i]-x[j];
      int dy=y[i]-y[j];
      int temp=0;
      for(int k=0;k<n;k++){
	if((x[k]-x[i])*dy==(y[k]-y[i])*dx){
	  temp++;
	}
      }
      ans = max(temp,ans);

    }
  }
  cout <<ans<<endl;
  
  return 0;
  
}

