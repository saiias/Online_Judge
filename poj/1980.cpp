#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
int p,q,a,n;

bool comp(int a,int b,int c,int d,int e,int f){
  if(a*d*f<b*c*f+b*d*e) return false;
  else return true;
}

int  solve(int n,int t,int exp,int sum){
int  ans=0;
  for(int i=t;i*exp<=a;i++){
    int temp1=p*exp*i;
    int temp2=(sum*i)+exp;
    if(temp1<temp2*q) {continue;}
    if(temp1==temp2*q) {ans++; continue;}

    if(n==1) {continue;}

    ans+=solve(n-1,i,exp*i,temp2);

  }
  return ans;
  }



int main(){
  while(1){
    scanf("%d %d %d %d",&p,&q,&a,&n);
    if(!p&&!q&&!a&&!n) break;

    cout<<solve(n,1,1,0)<<endl;

  }
}
 
