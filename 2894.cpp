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
int main()
{
  int n;
  cin>>n;
  while(n--){
    
    int m;
    cin>>m;
    int first=100000000,last=0;
    vector<int>ans(1001,0);
    for(int j = 0;j<m;j++){
      char c;
      int a,b;
      cin>>c>>a>>b;
      
      first=min(first,a);
      last=max(last,b);
      
      for(int x = a;x<b;x++){
	ans[x]++;
      }
    
    }
    
    for(int y= first;y<=last;y++)
      if(ans[y])
	cout<<char('A'+ans[y]-1);
    cout<<endl;
  }
  return 0;
}

