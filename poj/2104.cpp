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
#include<sstream>
#include<map>
#include<set>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
#define isValid(x,y,p,q) (x>=0 && x<p &&y>=0 && y<q)
#define MAX_N 1000000
#define MAX_M 5000

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
  
///////////////////////////////////////////////////////////////

const int B = 1000;
int N,M;
int A[MAX_N];
int I[MAX_M],J[MAX_M],K[MAX_M];
int nums[MAX_N];
vector<int> bucket[MAX_N/B];

void solve()
{
  REP(i,N){
    bucket[i/B].push_back(A[i]);
    num[i] = A[i];
  }
  sort(nums,nums+N);

  REP(i,N/B){
    sort(bucket[i].begin(),bucket[i].end())
  }

  REP(i,M){
    int l = I[i];
    int r = J[i];
    int k = K[i];
    int lb = -1;
    int ub = N-1;
    while(ub - lb > l){
      int md = (lb + ub)/2;
      int x = nums[md];
      int 
    }
    
    
  }
  
}
  


int main(){
  
  return 0;
  
}

