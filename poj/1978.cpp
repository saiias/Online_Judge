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
  while(1){
    int n,r;
    cin>>n>>r;
    if(n==0&&r==0) return 0;

    vector<int> card;
    
    for(int i=0;i<n;i++){
      card.push_back(i+1);
      //      DEBUG(i);
      //      DEBUG(card[i]);
      
	    }

    for(int i=0;i<r;i++){
      int p,c;
      cin>>p>>c;
      
      vector<int>::iterator it= card.end();
      vector<int> temp1,temp2;
      for(int j=0;j<p-1;j++){
	
	temp1.push_back(card[n-j-1]);
	//	DEBUG(card[n-j]);
	
	card.pop_back();
      }

      for(int j=0;j<c;j++){
	//	DEBUG(1);
	//	DEBUG(card[n-p-j]);
	
	temp2.push_back(card[n-p-j]);
	//DEBUG(temp2[j]);
	
	//	DEBUG(card[n-p+1-j]);
	
	card.pop_back();
      }

      for(int j=0;j<p-1;j++){
	card.push_back(temp1[p-2-j]);
      }
      for(int j=0;j<c;j++){
	//	DEBUG(temp2[0]);
	
	card.push_back(temp2[c-j-1]);
	//	DEBUG(card[n-1]);
	
      }
      //      DEBUG(card[n-1]);
      //            REP(i,n) DEBUG(card[n-i-1]);
      
    }
    
    cout<<card[n-1]<<endl;
    
  }
  
  return 0;
  
}

