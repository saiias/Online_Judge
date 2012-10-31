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
#include<complex>

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
#define ll long long

using namespace std;
///////////////////////////////////////////////////////////////
int N;
int k,m;
ll temp;

vector<int> input(501,0);
int ans[500],tmp[500];

bool C(ll d,int a,int t)
{
  ll s = 0;
  int cut = 0;
  for(int i= a;i<m;i++){
    //    DEBUG(input[i]);
    
    if(input[i]>d) return false;
    if(s+input[i]>d){
      if(++cut>=t) return false;
      s=input[i];
      
    }else s+=input[i];
  }
  return true;
  
      
}

void rec(int c,int cut,ll s)
{
  if (ans[0]>=0) return;
  if(c==m){
    REP(i,m) ans[i] = tmp[i];
    return;
  }
  if(!C(temp,c,k-cut)) return;
  if(c&&cut<k-1){
    tmp[c-1] = 1;
    rec(c+1,cut+1,input[c]);
    tmp[c-1] = 0;
  }

  if(s+input[c] <= temp) rec(c+1,cut,s+input[c]);
  
}

    
		 

		 


int main()
{
  cin>>N;
  while(N--){
    cin>>m>>k;
    ll sum = 0;
    for(int i = 0 ;i< m;i++){
      cin >> input[i];
      sum +=input[i];
      //      DEBUG(input[i]);

    }
    //    DEBUG(m);
    
    ll lb = 0;
    ll ub = sum;
    ll mid;
    while(lb +1 < ub){
      mid = (lb+ub)/2;
      //      DEBUG(mid);
      
      if(C(mid,0,k)) ub = mid;
      else lb =mid;
    }
    
    temp = ub;

    REP(i,m) tmp[i]=0;ans[0] = -1;
    
    rec(0,0,0);
    
    
    
      
    REP(i,m){
      if(i) printf(ans[i-1]?" / ":" ");
      printf("%d",input[i]);
    }
    
      
    
    puts("");
    
	
      
      
  }
  
  return 0;
  
}

