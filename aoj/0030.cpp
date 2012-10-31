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

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
  
///////////////////////////////////////////////////////////////
int ret = 0;
int s,n;
void dfs(int start,int sum,int n)
{
  if(sum == s && n==0){
    ret++;
    return;   
  }

if(start == 10 ||n ==0) return;

dfs(start+1,sum,n);
dfs(start+1,sum+start,n-1);

   
}

int main(){
  while(cin>>n>>s){
    if(n == 0 && s == 0) break;
    
    ret = 0;
    dfs(0,0,n);
    cout<<ret<<endl;
    }
  return 0;
  
}

