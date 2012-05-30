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
  int t = 0;
  cin>>t;
  REP(i,t){
    int result =0;
    int n =0;
    cin>>n;
    int input[n];
    
    REP(j,n) cin>>input[j];
    int size = n;
    int flag = 1;
    while(flag){
      int a = 0;
      
      for(int j=0;j<size-1;j++){
        if(input[j]>input[j+1]){
          int t = input[j+1];
          input[j+1] = input[j];
          input[j]  = t;
          ++result;
          a=1;
        }
        if(j==size-2 &&a==0){
          flag =0;
        }
        
      }
      
      
    }
    
    
    
    cout<<"Scenario #"<<i+1<<":"<<endl;
    cout<<result<<endl;
    if(i !=t-1) cout<<endl;
    
  }
  
  
  return 0;
  
}

