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
#define HW 12


using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
///////////////////////////////////////////////////////////////
bool flag[12][12];  
vector<string> box(12,string(12,' '));         

void dfs(int i, int j)
{
  if(box[i][j] == '0'|| flag[i][j] == true) return;  
  flag[i][j] = true;
//  cout<<"x "<<i<<" y "<<j<<endl;  
  for(int x = 0 ; x < 4 ; x++){
    int ax =i + dx[x];
    int ay =j + dy[x];
    if(isValid(ax,ay,12,12)){
      dfs(ax,ay);
    }
  }
  return;
}

int main(){
  int res = 0;
  string str;

  while(getline(cin,str)){
    res =0;
    memset(flag,0,144);    
    if(str.empty()) continue;    
    for(int i = 0;i < HW ; ++i){      
      box[i] = str;
      getline(cin,str);
    }
  
   
    for(int i = 0;i < HW ; ++i){
      for(int j = 0 ; j < HW ; ++j ){
        if(box[i][j] == '1' && flag[i][j] ==false){
            dfs(i,j);
            ++res;
      }
    }
  }
    cout<<res<<endl;
  }  
  return 0;
  
}

