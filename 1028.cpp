#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////

int main(){
  string current="http://www.acm.org/";
  
  stack<string> f,b;
  while(1)
    {
      bool ignore=false;
      string c;
      cin>>c;
      if(c=="QUIT")
	{
	  break;
	}
      else if(c=="BACK")
	{
	  if(b.empty())
	    {
	      ignore=true;
	      
	    }else
	    {
	      f.push(current);
	      current=b.top();
	      b.pop();
	    }
      
	}
      else if(c=="FORWARD")
	{
	  if(f.empty())
	    {
	      ignore=true;
	    }else
	    {
	      b.push(current);
	      current=f.top();
	      f.pop();
	    }
	  
	}
      else if(c=="VISIT")
	{
	  //DEBUG(1);

	  b.push(current);
	  cin>>c;
	  current=c;
	  while(!f.empty()) f.pop();
	  
	  
	  //	  DEBUG(b.top());
	  
	}

      if(ignore)
	{
	  cout<<"Ignored"<<endl;
	}
      
      else
	cout<<current<<endl;
      
    }
  
}
