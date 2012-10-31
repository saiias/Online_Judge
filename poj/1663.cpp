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
int n;
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int a,b;
    int ans;
    scanf("%d %d",&a,&b);
    if(a==b||a-2==b){
      if(a%2==0) {ans=a+b;}
      else {ans=a+b-1;}
      cout<<ans<<endl;

    }else{
      cout<<"No Number"<<endl;
    }
  }
}
