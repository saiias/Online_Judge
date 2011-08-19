#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#include<climits>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////

int main(){
  long long n,k;
  long long ans=0;
  while(cin>>n>>k){
    ans=n;
    int temp=n;
    while(temp>=k){
      ans+=temp/k;
      temp=temp/k+temp%k;
    }
    cout<<ans<<endl;
  }
}
