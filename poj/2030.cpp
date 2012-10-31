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

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
string max(string s1,string s2)
{
  if(s1.size()>s2.size()) return s1;
  else if(s1.size()<s2.size()) return s2;
  if(s1>s2) return s1;
  else return s2;
}



int main()
{
  int W,H;

  while(cin>>W>>H){
    if(W+H==0) break;
    char maze[W][H];
    string m[W][H];
    string ans="";
    
    REP(j,H)REP(i,W){
      char temp_1;
      cin>>temp_1;
      maze[i][j]=temp_1;
    }

    REP(j,H)REP(i,W){
      if(maze[i][j]<'0'||maze[i][j]>'9') continue;
      string temp ="";
      if(i>0) temp=max(temp,m[i-1][j]);
      if(j>0) temp=max(temp,m[i][j-1]);
      m[i][j] =temp+maze[i][j];
      if(m[i][j] =="0") m[i][j]="";
      
      ans =max(ans,m[i][j]);

    }

    cout<<ans<<endl;
    
  
    
      
  }

  
  return 0;
  
}

