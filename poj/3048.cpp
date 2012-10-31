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
#define MAX_M 20001

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
bool prime[MAX_M];
int pr[MAX_M];
int pr_count;
///////////////////////////////////////////////////////////////
int main(){
  int result=1;
  prime[0] = true;
  prime[1] = true;
  for(int i =2;i<MAX_M;++i){
    if(prime[i]) continue;
    for(int j = i*2;j<MAX_M;j+=i){
      prime[j] = true;
    }
  }

  REP(i,MAX_M){
    if(!prime[i]) pr[pr_count++]  = i;
  }
  
  int n;
  cin>>n;
  int max_pr = 1;
  while(n--){
    int in;
    cin>>in;
    int temp = in;
    int temp_pr = 0;
    if(in ==1) continue;
    REP(i,pr_count){
      if(temp<pr[i]) break;
      if(temp%pr[i]) continue;
      temp_pr =pr[i];
      while(temp!=0 && temp%pr[i] ==0) temp/=pr[i];
    }

    if(temp_pr>max_pr){
      max_pr =temp_pr;
      result = in;
    }
  }
  cout<<result<<endl;
  return 0;
  
}

