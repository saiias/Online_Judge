#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////

int main(){
  string a,b;
  int ans=0;
  cin>>a>>b;
  
  REP(i,a.size())REP(j,b.size()) ans+=(a[i]-'0')*(b[j]-'0');
  
  cout<<ans<<endl;
  
}
