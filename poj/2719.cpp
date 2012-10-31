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
int solve(int n)
{
  int ret = 0;
  int temp  =1;
  if(n<10){
    if(n>4) n--;
    return n;
  }
  
  while(n/10){
    int a=n%10;
    
    if(a>=4) --a;

//    DEBUG(a);
    
    ret+=a*temp;
    temp*=9;
    n/=10;
    //DEBUG(ret);

  }
//  DEBUG(ret);
  if(n>4) n--;
  
  ret+=n*temp;
  
  return ret;
}

int main(){
  int n;
  while(cin>>n,n){
    cout<<n<<": "<<solve(n)<<endl;
  }
  return 0;
  
}

