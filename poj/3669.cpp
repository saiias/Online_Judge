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
bool maze[302][302][1000];

int main()
{
  int n;
  cin>>n;
  
  for(int i =0;i<n;i++)
    {
      int x,y,t;
      
      cin>>x>>y>>t;
      maze[x][y][t]==true;
      
  }
  
  
  return 0;
  
}

