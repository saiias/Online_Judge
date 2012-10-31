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
  string t;
  cin>>t;
  sort(t.begin(),t.end());
  do{
    cout<<t<<endl;
  }while(next_permutation(t.begin(),t.end()));
  
  return 0;
  
}

