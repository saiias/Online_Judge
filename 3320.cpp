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
#include<set>
#include<map>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
//template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;


///////////////////////////////////////////////////////////////
int p;
int a[1000000];

void solve(){
    set<int> all;
    for(int i = 0;i < p;i++){
        all.insert(a[i]);
    }
    int n = all.size();
    int s = 0,t = 0,num = 0;
    map<int,int> count;
    int res =p;
    for(;;){
        while(t<p&& num< n){
            if(count[a[t++]]++ == 0){
                num++;
            }
        }
        if(num<n) break;
        res=min(res,t-s);
        if(--count[a[s++]] ==0){
            num--;
        }

            
    }
    printf("%d\n",res);
}
int main()
{
    scanf("%d",&p);
    for(int i =0;i<p;i++){
        scanf("%d",a+i);
    }
    solve();
    return 0;
  
}

