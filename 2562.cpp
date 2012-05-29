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
  ll x,y,carry,result,index;
  while(cin>>x>>y){
    if(x==0&&y==0) break;
    carry = 0;
    result =0;
    index =1;
    ll d=1;
    while(d < 10000000000){
      if(carry +(x/d)%10 + (y/d)%10>=10){
        carry =1;
        ++result;
      }
      else carry = 0;

      d *=10;
      
    }
    
    if(result ==0) cout<<"No carry operation."<<endl;
    else if(result == 1)cout<<"1 carry operation."<<endl;
    else cout<<result<<" carry operations."<<endl;
    
    
  }
  
  return 0;
  
}

