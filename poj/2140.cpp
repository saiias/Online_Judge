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
  int n=0;

  scanf("%d",&n);
  long long ans=1;
  for(int i = 2; i*i<n*2;i++){
    if(i%2==0){
      if(n%i==i/2) ans++;  
    }else{
      if(n%i==0) ans++;
    }
  }
  cout<< ans <<endl;
}
