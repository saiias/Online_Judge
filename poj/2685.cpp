#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<complex>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(i=0;i<n;i++)
using namespace std;

int n;

int kansan(string c){
  int ans =0;
  int tmp =1;
  for(unsigned int i=0;i<c.size();i++){
    // DEBUG(c[i]);
    if(c[i]=='m'){
      ans+=tmp*1000;
      tmp=1;
    }else if(c[i]=='c'){
      ans+=tmp*100;
      tmp=1;
    }else if(c[i]=='x'){
      ans+=tmp*10;
      tmp=1;
    }else if(c[i]=='i'){
      ans+=tmp;
      tmp=1;
    }else{
      tmp=c[i]-'0';
    }
}
  return ans;
}

void rekansan(int sum){
  int a;  
  if(sum>=1000){
    a=sum/1000;
    sum%=1000;  
    if(a!=1){  
      cout<<a;
    }
    cout<<"m";  
  }
  if(sum>=100){
    a=sum/100;
    sum%=100;  
    if(a!=1){  
      cout<<a;
    }
    cout<<"c";
  }
  if(sum>=10){
    a=sum/10;
    sum%=10;  
    if(a!=1){  
      cout<<a;
    }
    cout<<"x";
  }

  if(sum!=1&&sum!=0){  
    cout<<sum<<"i"<<endl;
  }
  else if(sum==1){
      cout<<"i"<<endl;
}
  else{
      cout<<endl;
  }
  
}

int main(){
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    //   vector<char> num1(9),num(9);    
    string num1,num2;
    cin>>num1>>num2;
    //scanf("%s %s",num1,num2);
    int x=kansan(num1);
    int y=kansan(num2);
    //DEBUG(x);
    // DEBUG(y); 
    rekansan(x+y);
  }
  



}
