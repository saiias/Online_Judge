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
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;


///////////////////////////////////////////////////////////////
int main(){
  string in;
  map<char,char> mapping;
  string a ="ABCDEFGHIJKLMNOPQRSTUVWXYZ, ";
  string b ="VWXYZABCDEFGHIJKLMNOPQRSTU, ";  
  REP(i,(int)a.length()) mapping.insert(map<char,char>::value_type(a[i],b[i]));
  
  vector<string> input(200);
  string test;
  
  while(true){
    cin>>in;
    bool flag = false;
    if(in=="START"){
      while(true){
        getline(cin,test);
        if(test == "END"){
          flag =true;
          break;
        }
        REP(i,test.length()){
          if(test[i]>='A'&&test[i]<='Z') test[i]=b[test[i]-'A'];
          cout<<test[i];
      }
          
      }
     cout<<endl;
      
    }
    else if(flag) continue;
    
    else if(in == "ENDOFINPUT"){
      break;
    }
  }
  
  return 0;
  
}

