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
typedef pair<int,pair<int,int> > edge;


int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

int vi[26];

///////////////////////////////////////////////////////////////

int getRoot(int x)
{
  if(x == vi[x]) return x;
  else return vi[x] = getRoot(vi[x]);
}

bool isSame(int x,int y)
{
  return getRoot(x) == getRoot(y);
}

void merge(int x,int y)
{
  int temp0 = getRoot(x);
  int temp1 = getRoot(y);
  vi[temp0] = temp1;
  return;
}


int main(){
  int t=0;
  while(cin>>t){
    if(t==0) break;
    
    priority_queue<edge,vector<edge>,greater<edge> > que;
    REP(i,26) vi[i] = i;
    REP(i,t-1){
      char a;
      int b = 0;
      cin>>a>>b;
      if(b==0) scanf("\n");
      REP(j,b){
        char c;
        int d=0;
        if(j<b-1) scanf(" %c %d",&c,&d);
        else scanf(" %c %d\n",&c,&d);
        que.push(make_pair(d,make_pair(a-'A',c-'A')));
      }
    }
    int temp = 0;
    int result = 0;
    while(!que.empty() && temp<t-1){
      edge a  = que.top();que.pop();
      
      if(!isSame(a.second.first,a.second.second)){
        merge(a.second.first,a.second.second);
        result +=a.first;
        temp++;
      }
    }
      
      
    cout<<result<<endl;
  }
  
  return 0;
  
}

