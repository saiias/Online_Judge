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

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int n,m;
struct seq
{
  int num;
  string s;
  int inverse; 
};

void com(seq se[],int x)
{
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(se[x].s[j]<se[x].s[i]){
	//	DEBUG(se[x].inverse);
	
	se[x].inverse++;
	
      }
    }
  }
  //  DEBUG(se[x].inverse);
  
}



int main()
{
  cin>>n>>m;
  //  vector<string> input(m);

  seq se[m];

  
  for(int i=0;i<m;i++){
    se[i].num=0;
    se[i].inverse=0;
    
    
    cin>>se[i].s;
    se[i].num=i;  
    com(se,i);
  }
  
  seq temp;
  for(int i=0;i<m-1;i++){
    for(int j=i+1;j<m;j++){
      if(se[i].inverse>se[j].inverse){
	temp=se[i];
	se[i]=se[j];
	se[j]=temp;
      }
      if(se[i].inverse==se[j].inverse && se[i].num < se[j].num){
	temp=se[i];
	se[i]=se[j];
	se[j]=temp;
      }
      
    }
  }
  
  for(int i=0;i<m;i++){
    cout<<se[i].s<<endl;
    //    DEBUG(se[i].inverse);

  }
  
  
  return 0;
  
}

