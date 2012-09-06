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
  int n;
  while(cin>>n,n){
    string in;
    cin>>in;
    vector<bool> flag(26,false);
    deque<char> d;
    int result = 0;
    for(string::const_iterator it(in.begin());it !=in.end();++it){
      char c =*it;
      if(!flag[c-'A']){
        flag[c-'A'] =true;
        if(n ==0){
          d.push_back(c);
        }
        else{
          n--;
        }
        
      }
      else{
        flag[c-'A'] =false;
        deque<char>::iterator p =find(d.begin(),d.end(),c);
        if(p == d.end()){
          if(d.empty()){
            n++;}
          else{
            d.pop_front();
          }
        }else{
          d.erase(p);
          result++;
        }
      }
    }
    if(result){
      cout<<result<<" customer(s) walked away."<<endl;
    }else{
      cout<<"All customers tanned successfully."<<endl;
      
    }
  }
  return 0;
  
}

