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

void dfs(int start,int depth,int sum,int max_sum)
{
  DEBUG(ret);
  
  if(depth ==0){
    if(sum == max_sum){
      ret++;
    }
    return;      
  }
  for(int i = start+1 ;i<=9;++i){
    dfs(i,depth-1,sum+i,max_sum);
  }
}

int main(){
  int n,s;
  while(cin>>n>>s,n&&s){
    for(int i =0;i <= 9;i++){
      dfs(i,n-1,i,s);
    }
    cout<<ret<<endl;
    ret = 0;
    
  }
  
  return 0;
  
}

