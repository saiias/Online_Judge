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
int main(){
  int n,s;
  int in[20000];
  
  while(cin>>n>>s,n){
    int result =0;
    memset(in,0,20000);
    REP(i,n) cin>>in[i];
    
    REP(i,n-1){
      REP(j,n-i-1){
        int temp = in[i]+in[i+j+1];
        
        // cout<<"test "<<i<<":"<<i+j+1<<endl; 
        if(temp>s) result++;
        
      }
    }
    cout<<result<<endl;
    
  }
  return 0;
  
}

