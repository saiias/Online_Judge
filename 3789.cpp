#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cmath>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)

using namespace std;
///////////////////////////////////////////////////////////////
int n;
vector<int> h_binary(6);
vector<int> m_binary(6);
vector<int> s_binary(6);
//vector<char> a(8);
char a[8];


int main(){
  scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf(" %s",a);   
       //        DEBUG(1);
      int h=0,m=0,s=0;
      //cin>>a;
      //  DEBUG(a);
      for(int j=0;j<2;j++){
	h+=(a[j]-'0')*pow(10,1-j);
}
      for(int j=3;j<5;j++){
	m+=(a[j]-'0')*pow(10,4-j);
    }
      for(int j=6;j<8;j++){
	s+=(a[j]-'0')*pow(10,7-j);
    }

      //  DEBUG(h);
      // DEBUG(m);
      // DEBUG(s);

      for(int j=5;j>=0;j--){
	//	DEBUG(h);
	if(h/(int)(pow(2,j))==1){
	  h_binary[5-j]=1;
	  h-=(pow(2,j));
	}else{
	  h_binary[5-j]=0;
	}
	//	DEBUG(h_binary[5-j]);
      }
      for(int j=5;j>=0;j--){
	if(m/(int)(pow(2,j))==1){
	  m_binary[5-j]=1;
	  m-=(pow(2,j));
	}else{
	  m_binary[5-j]=0;
		   }      
      }
      for(int j=5;j>=0;j--){
	//	DEBUG(s/(int)(pow(2,j)));
	//	DEBUG(s);
	if(s/(int)(pow(2,j))==1){
	  s_binary[5-j]=1;
	  s-=(pow(2,j));
	}      else{
	  s_binary[5-j]=0;
	}
	//		DEBUG(s_binary[i][j]);
      }
    
   cout<<i+1<<" ";
   for(int j=0;j<6;j++){
     cout<<h_binary[j]<<m_binary[j]<<s_binary[j];
   }

   cout<<" ";
   for(int j=0;j<6;j++){
     cout<<h_binary[j];   
   }
   for(int j=0;j<6;j++){
     cout<<m_binary[j];   
   }
   for(int j=0;j<6;j++){
     cout<<s_binary[j];   
   }
   cout<<endl;
  }
}

