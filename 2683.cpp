#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#define MAX_M 100
using namespace std;
int m;
int year;
int money;
int var;
int ver;
double per;
int fee;
int fukuri(){
  int risi=0;
  int y=money;
  for(int q=0;q<year;++q){    

    risi=static_cast<int>(y*per);
    y=y+risi-fee;
  }
  return y;
}

int tanri(){
  int r1=0;
  int x=money;
  for(int q=0;q<year;q++){
    r1+=static_cast<int>(x*per);
    x-=fee;
  }
  return x+r1 ;
}

int main(){
  int ans;
  scanf("%d", &m);
  for(int i=0;i<m;++i){
    scanf("%d",&money);
    scanf("%d",&year);
    scanf("%d",&var);
    ans=0;
    for(int j=0;j<var;j++){
      scanf("%d %lf %d",&ver,&per,&fee);      
      for(int x=0;x<var;x++){
	int  s=0;
	if(ver==0){
	  s=tanri();     
	}   
	else if(ver==1){
	  
	  s=fukuri();
	}
	ans=max(ans,s);
      } 
    }   
    printf("%d\n",ans);
    }  
}
