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
#include<list>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
#define isValid(x,y,p,q) (x>=0 && x<p &&y>=0 && y<q)

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
typedef pair<int,int> wall;


int main(){
  
  int t;
  cin>>t;
  
  while(t--){
    int n=0,k=0;
    bool temp[101];
    int result = 0;
    vector<wall> W(101);
    REP(i,101) temp[i] = true;

    cin>>n>>k;
    
    for(int i =0;i<n;++i){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      W[i].first =min(a,c);
      W[i].second=max(a,c);
    }
    sort(W.begin(),W.begin()+n);
    
    
    REP(i,101){
      int tmp = 0;
      vector<wall> a;
      
      REP(j,n){
        if(temp[j] && W[j].first<=i && i<=W[j].second){
          ++tmp;
          a.push_back(make_pair(W[j].second,j));
          
        }
        sort(ALL(a));
        while(tmp>k){
          result++;
          tmp--;
          temp[a.back().second]=false;
          a.pop_back();
        }
      }
    }
    cout<<result<<endl;
  }
  
  
  return 0;
  
}

