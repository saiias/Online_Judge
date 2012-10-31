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
int a,d,n;
int p;

bool prime(int temp){
  if(temp==2) return true;
  if(temp==1||temp%2==0) return false;

  for(int i=3;i*i<=temp;i+=2){
    if(temp%i==0){
      //      DEBUG(i);
      return false;
    }  
  }
  // DEBUG(temp);
  return true;
}

int tousa(int a,int d,int n){
  do{
    if(prime(a)){
      n--;    
    }
    a+=d;
  }while(n>0);

  return a-d;
} 



int main(){
//   ptable[0]=2;
//   for(int i=1;i<100;i++){
//     for(unsigned int j=3;j<ptable.size();j+=2){
//       if(j%ptable[i]!=0){
// 	ptable[i]=j;
//       }
//     }
//     DEBUG(ptable[i]);
//   }


  while(1){
    scanf("%d %d %d",&a,&d,&n);
    if(a==0&&d==0&&n==0) break;
    int temp=0;
    temp=tousa(a,d,n);  
    cout<<temp<<endl;
  }
  return 0;
}
