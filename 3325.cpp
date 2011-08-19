#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////

int main(){
  int n=0;
  while(1){
int sum=0;
      int temp=0;
      int temp_max=0;
      int temp_min=10000000;    
      scanf("%d",&n);
      int n2=n;
      if(n==0) break;
      for(int i=0;i<n;i++){     
	scanf("%d",&temp);
	temp_max=max(temp,temp_max);  
	temp_min=min(temp,temp_min);
	sum+=temp;
	//DEBUG(temp_min);
	//DEBUG(temp_max);
	//DEBUG(temp);
    }
      cout<<(sum-temp_min-temp_max)/(n2-2)<<endl;
       }
}
