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
int pc=0;
int word[1000][3];
vector<int> reg(1000,0);




void f2(int d,int s){
  reg[d]=s;
  pc++;
}
void f3(int d,int s){
  reg[d]=(s+reg[d])%1000;
  pc++;
}
void f4(int d,int s){
  reg[d] =(reg[d]*s)%1000;
  pc++;
}
void f5(int d,int s){
  reg[d]=reg[s];
  pc++;
}
void f6(int d,int s){
  reg[d]=(reg[d]+reg[s])%1000;
  pc++;
}
void f7(int d,int s){
  reg[d] =(reg[d]*reg[s])%1000;
  pc++;
}
void f8(int d,int s){
  reg[d]=word[reg[s]][0]*100+word[reg[s]][1]*10+word[reg[s]][2];
  pc++;
}
void f9(int d,int s){
  word[reg[s]][0]=reg[d]/100;
  word[reg[s]][1]=(reg[d]/10) % 10;
  word[reg[s]][2]=reg[d] % 10;
  pc++;
}
void f0(int d,int s){
  if(reg[s]!=0){
    //    DEBUG(1);
    pc=reg[d];
    // DEBUG(pc);
}
  else{
    pc++;
  }
}

int main(){
  char n[3];
  //  DEBUG(1);
  while(~scanf("%s",n)){
    //  DEBUG(n/100);
    word[pc][0]=(int)(n[0]-'0');
    word[pc][1]=(int)(n[1]-'0');
    word[pc][2]=(int)(n[2]-'0');
    pc++;  

  }
  //      REP(i,3) DEBUG(word[9][i]);

  int ans=0;
  pc=0;
  while(1){
    ans++;

    //    DEBUG(pc);
    // DEBUG(ans);
    //DEBUG(reg[8]);
    switch(word[pc][0]){
    case 1: cout<<ans<<endl; return 0;
    case 2: f2(word[pc][1],word[pc][2]); break;
    case 3: f3(word[pc][1],word[pc][2]); break;
    case 4: f4(word[pc][1],word[pc][2]); break;
    case 5: f5(word[pc][1],word[pc][2]); break;
    case 6: f6(word[pc][1],word[pc][2]); break;
    case 7: f7(word[pc][1],word[pc][2]); break;
    case 8: f8(word[pc][1],word[pc][2]); break;
    case 9: f9(word[pc][1],word[pc][2]); break;
    case 0: f0(word[pc][1],word[pc][2]); break;
    }

  }

  //  cout<<"ANS="<<ans<<endl;  a
}
