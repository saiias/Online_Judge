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
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int last = s[0]-'0';
    int num = 1;
    for(int i = 1;i<(int)s.size();i++){
      if(s[i-1]!=s[i]){
        cout<<num;
        cout<<last;
        last=s[i]-'0';
        num =1;
      }else{
        ++num;
      }
    }
    cout<<num;
    cout<<last;
    cout<<endl;
  }
  
  return 0;
  
}

