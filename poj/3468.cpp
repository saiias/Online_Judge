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
#include<sstream>
#include<map>
#include<set>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
#define isValid(x,y,p,q) (x>=0 && x<p &&y>=0 && y<q)
#define MAX_Q 100000
#define MAX_N 100000
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
  
///////////////////////////////////////////////////////////////
const int DAT_SIZE =(1<<18)-1;
int N,Q;

int A[MAX_N];
int B[MAX_Q];
char T[MAX_Q];

int L[MAX_Q],R[MAX_Q],X[MAX_Q];
ll data[DAT_SIZE],datb[DAT_SIZE];

void add(int a,int b,int x,int k,int l,int r)
{
  if( a<= l && r <= b ){
    data[k] +=x;
  }
  else if( l< b && a< r){
    datb[k] +=(min(b,r) -max(a,l))*x;
    add(a,b,x,k*2+1,l,(l+r)/2);
    add(a,b,x,k*2+2,(l+r)/2,r);
  }
}

ll sum(int a,int b,int k,int l,int r)
{
  if(b<=l || r<= a) return 0;

  else if( a<=l && r<=b) return data[k]*(r-l) +datb[k];

  else{
    ll res = (min(b,r) - max(a,l))*data[k];
    res+=sum(a,b,k*2+1,l,(l+r)/2);
    res+=sum(a,b,k*2+2,(l+r)/2,r);
    return res;
  }
  
                                        
}

void solve()
{
  REP(i,N) add(i,i+1,A[i],0,0,N);

  REP(i,Q){
    if(T[i]=='C') add(L[i],R[i]+1,X[i],0,0,N);
    else printf("%lld\n",sum(L[i],R[i]+1,0,0,N));

  }
  
}

int main(){
  cin>>N>>Q;

  // REP(i,N) cin>>A[i];
  // REP(i,Q){
  //   cin>>T[i];
  //   if(T[i]=='C') cin>>L[i]>>R[i]>>X[i];
  //   else cin>>L[i]>>R[i];
  // }
  // solve();
  int temp;
  char query[2];
  int l, r, x;
  for (int i = 0; i < N; i++){
    scanf("%d", &temp);
    add(i, i + 1, temp, 0, 0, N);
  }
  for (int  i = 0; i < Q; i++){

    scanf("%s", query);
    if (query[0] == 'C'){
      scanf("%d%d%d", &l, &r, &x);
      add(l - 1, r, x, 0, 0, N);
    }
    else {
      scanf("%d%d", &l, &r);
      printf("%lld\n", sum(l - 1, r, 0, 0, N));
    }
  }
  
           
  return 0;
  
}


