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
int n;

int main(){
  while(1){
    scanf("%d",&n);
    if(!n) break;
    char word[1001][8];
    char key[8];
    for(int i=0;i<n;i++){
      cin>>word[i];
    }

    cin>>key;
    int temp=0;
    for(int i=0;i<(int)strlen(key);i++){
      if(key[i]=='_'){
	temp++;
      }
    }    
    //    DEBUG(temp);
    int ans=0;    
    for(int i=0;i<n;i++){
      int num=0;
      for(int j=0;j<(int)strlen(key);j++){
	for(int m=0;m<(int)strlen(word[i]);m++){
	  if(word[i][m]==key[j]){
	    num++;
	    word[i][m]='/';
	    break;
	  }
	}      
      }
      if((int)strlen(word[i])-num<=temp){
	ans++;
      }


    }
    cout<<ans<<endl;
    
  }
}
