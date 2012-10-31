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
int  F[1000001];
long long table[1000001];
int p[1000001];
int gcd(int a,int b){
  if(b==0){
    return a;
  }else{
    return gcd(b,a%b);
  }
}

int faray(int x){
  int temp=0;
  for(int i = 1;i<x; i++){
     if(gcd(x,i)==1) {
       temp++; 
     }
  }
  return temp;
}

int eulerPhi(int n) {
 static int lookup = 0, p[1000001], g[1000001];
  if (!lookup) {
    REP(i,1000001) p[i] = 1, g[i] = i;
    for (int i = 2; i < 1000001; ++i) {
      if (p[i]) {
        g[i] -= g[i] / i;
        for (int j = i+i; j < 1000001; j+=i)
          p[j] = 0, g[j] -= g[j] / i;
      }
    }
    lookup = 1;
  }
  return g[n];
}

int main(){
  table[2]=1;
  for(int i=3;i<=1000001;i++){
    table[i]=eulerPhi(i)+table[i-1];
  } 

  while(1){
    int n=0;
    scanf("%d",&n);
    if(n==0) break;
    printf("%lld\n",table[n]);
  }
}

