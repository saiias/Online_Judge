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
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

#define MAX_N 4000
///////////////////////////////////////////////////////////////
int A[MAX_N],B[MAX_N],C[MAX_N],D[MAX_N];
int CD[MAX_N*MAX_N];
int main(){
  int n;
  cin>>n;
  REP(i,n){
    cin>>A[i]>>B[i]>>C[i]>>D[i];
  }
  REP(i,n)REP(j,n){
    CD[i*n+j]=C[i]+D[j];
  }
  sort(CD,CD+n*n);
  ll res = 0;

  REP(i,n)REP(j,n){
    int cd = -A[i]-B[j];
    res+=upper_bound(CD,CD+n*n,cd)-lower_bound(CD,CD+n*n,cd);
  }
  cout<<res<<endl;
  return 0;
  
}

