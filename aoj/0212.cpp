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
#define INF 100000000
#define isValid(x,y,p,q) (x>=0 && x<p &&y>=0 && y<q)

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<pair<int,int>,int> NODE;
#define mp(a,b,c) make_pair(make_pair(a,b),c)
#define cost first.first
#define ticket first.second
#define pos second

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int n;

///////////////////////////////////////////////////////////////
int table[100][100];

int djk(int a,int b,int c)
{
  priority_queue<NODE,vector<NODE>,greater<NODE> > que;
  
  int dp[100][11];
  REP(i,100)REP(j,11) dp[i][j] =INF;
  REP(j,11) dp[a][j] = 0;

  que.push(mp(0,c,a));
  while(!que.empty()){
    NODE q = que.top();
    que.pop();
    for(int i = 0 ; i < n ; i++){
      if(table[q.pos][i] + q.cost< dp[i][q.ticket]){
        dp[i][q.ticket] = table[q.pos][i]+q.cost;
        que.push(mp(table[q.pos][i] + q.cost,q.ticket,i));
      }
      if(q.ticket && table[q.pos][i]/2 + q.cost< dp[i][q.ticket-1]){
        que.push(mp(table[q.pos][i]/2 + q.cost,q.ticket-1,i));
        dp[i][q.ticket-1] = table[q.pos][i]/2 + q.cost;
      }
    }
  }
  int mi = INF;
  REP(j,11) mi = min(dp[b][j],mi);
  return mi;
}


int main(){
  int c,m,s,d;  
  while(cin>>c>>n>>m>>s>>d,c){
    s--;
    d--;
    REP(i,100)REP(j,100) table[i][j]=INF;
    
    int a,b,f;
    for(int i = 0 ; i < n ; i++){
      cin>>a>>b>>f;
      a--;
      b--;
      table[a][b] = table[b][a] = f;
    }
    cout<<djk(s,d,c)<<endl;
  }
  return 0;
  
}

