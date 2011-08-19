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
#define MAX_N 10000
///////////////////////////////////////////////////////////////
int prime[MAX_N];
bool is_prime[MAX_N+1];

int sieve(int n)
{
  int p =0;
  for(int i;i<=n;i++) is_prime[i]=true;
  is_prime[0]=is_prime[1] = false;
  for(int i=0;i<=n;i++){
    if(is_prime[i]){
      prime[p++]=i;
      for(int j=2*i;j<=n;j+=i) is_prime[i]=false;
    }
  }
  return p;
  
}

int main()
{

  return 0;
  
}

