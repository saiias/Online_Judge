#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>
#include<queue>



#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF (INT_MAX)
using namespace std;
///////////////////////////////////////////////////////////////
struct cake{
  int w;
  int d;
};
int n,w,d;

int main(){
  while(1){
    // DEBUG(1);
    scanf( "%d %d %d",&n,&w,&d);
    if(!n && !w && !d) break;
      vector<cake> c;
      vector<int> size;
      c.push_back((cake){w,d});
      size.push_back(w*d);
      int test;
      
      for(int i=0;i<n;i++){    
      int p,s;
      scanf("%d %d",&p,&s);
      //DEBUG(p);
      // DEBUG(s);      
      cake cut_cake=c[p-1];
      //DEBUG(cut_cake.w);
      //DEBUG(cut_cake.d);

      c.erase(c.begin()+p-1);
      size.erase(size.begin()+p-1);
      s %=(cut_cake.w+cut_cake.d);

      cake a,b;
      if(s<cut_cake.w){
	a=(cake){cut_cake.w-s,cut_cake.d};
	b=(cake){s,cut_cake.d};
      }
      else{
	a=(cake){cut_cake.w,s-cut_cake.w};
	b=(cake){cut_cake.w,cut_cake.d-s+cut_cake.w};
      }
     int temp1=a.w*a.d;
     int temp2=b.w*b.d;


      if(temp2<temp1){
	swap(a,b);
      }	
      c.push_back(a);
      c.push_back(b);
      size.push_back(a.w*a.d);
      size.push_back(b.w*b.d);
      
      //      DEBUG(temp1);
      // DEBUG(temp2);
    }
    sort(size.begin(),size.end());
    for(int i=0;i<(int)size.size();i++){
	cout<<size[i]<<" ";
    }
    cout<<endl;
  }
}
