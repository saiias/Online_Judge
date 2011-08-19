#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<complex>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
using namespace std;

typedef complex<int> P;

int n,m,sx,sy,ans;

void normalize(vector<P> line){
  scanf("%d",&m);
  for(int i=0;i<=m;i++){ 
    scanf("%d",&m);
    scanf("%d %d",&line[i].real(),&line[i].imag());
    if(i==0){
      sx=line[i].real();
      sy=line[i].imag();
      line[i].real()=0;
      line[i].imag()=0;
    }
    line[i].real()-=sx;
    line[i].imag()-=sy;
  }

}

void lotate(vector<P> line,int c){
  if(c==0){
    for(int q=0;q<m;q++){
      line[q]=line[q]*P(0,1);
    }
  }
  if(c==0){
    for(int q=0;q<m;q++){
      line[q]=line[q]*P(1,0);
    }
  }
  if(c==0){
    for(int q=0;q<m;q++){
      line[q]=line[q]*P(0,-1);
    }
  }
  if(c==0){
    for(int q=0;q<m;q++){
      line[q]=line[q]*P(-1,0);
    }

    
  }
}

int main(){
  while(1){
    scanf("%d",&n);
    DEBUG(n);
    if(n==0){ 
      break;
    }
    for(int t=0;t<=n;t++){
      vector<P> line0;
      vector<P> line;
      int f=0;
      for(int z=0;z<m;z++){
	if(z==0){
	  normalize(line0);
	}else{
      normalize(line);
      for(int s=0;s<4;s++){
	lotate(line,s);
	for(int a=0;a<m;a++){
	  if(line0!=line){
	    f=1;
	    break;
	  }
	}
      }
      if(f==1){
	ans++;
      }
	}
    }

    }
      cout<<ans<<endl;
      cout<<"+++++"<<endl;
  }
}
