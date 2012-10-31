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
  int n,p;
  while(cin>>n>>p){
    if(n == 0 && p == 0) break;
    int result = 0;
    vector<int> c(50,0);
    int temp = p;
    bool flag = true;
    int turn = 0;
    while(flag){
      if(temp>0){
        --temp;
        ++c[turn];
      }else{
        temp+=c[turn];
        c[turn] =0;
      }
      turn++;
      
      if(turn == n) turn = 0;
      
//      DEBUG(turn);
      
      REP(i,n){
        if(c[i] == p){
          flag = false;
          result =i;
          
          break;
        }
        
      }
      
      
         
    }
    
    cout<<result<<endl;
  }
  
  return 0;
  
}

