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

int main()
{
  int cost_max;

  while(scanf("%d",&cost_max)!=EOF)
    {
      int n;
      int type=1;
      vector<int> list;
      vector<int> ans;
      
      cin>>n;
      
      for(int i =0;i<n;i++){
	int t;
	scanf("%d",&t);
	list.push_back(t);
	//	DEBUG(list[i]);
	
      }
      int counter=0;
      
      priority_queue<int> temp1;
      priority_queue<int ,vector<int>,greater<int> > temp2;
      while(1){
	//	DEBUG(counter);
	
	char f;
	int s;
    
	cin>>f;
	if(f=='e') break;
	if(f=='a'){
	  cin >>s;
	  //	  if(s>cost_max) continue;
	  counter++;
	  
	  temp1.push(s);
	  temp2.push(s);
	  //	  DEBUG(s);
	  continue;
	  
	}
	else if(f=='p'){
	  cin>>s;
	  type=s;
	  continue;
	  
	  //	  DEBUG(s);
	}
	else if(f=='r'){
	  if(counter>0){
	
	    if(type == 1){
	      ans.push_back(temp2.top());
	      //	      DEBUG(temp2.top());
	
	      temp2.pop();
	      counter--;
	      
	      continue;
	      
	    }
	    
	    if(type == 2){
	      ans.push_back(temp1.top());
	      //	      DEBUG(temp1.top());
	      temp1.pop();
	      counter --;
	      continue;
	    }
	  }
	  else{
	    cout<<"-1"<<endl;
	    continue;
	  }
	}
      }

      for(int i =0;i<n;i++){
	//	DEBUG(list[i]);
	if(list[i]>counter)
	  cout<<-1<<endl;

	else
	cout<<ans[list[i]-1]<<endl;
      }
      cout<<endl;

    }
    
  return 0;
  
}
   
