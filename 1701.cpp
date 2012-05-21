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
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;


///////////////////////////////////////////////////////////////
int M;
int a;
int b;
int K[10005];
ll ans[10005];
int t;
int sum;
ll up[10005],down[10005];

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&M,&a,&b);
        for(int i =1;i<=M;i++){
            scanf("%d",&K[i]);
        }
        sum =0;
        int tmp = K[1];
        up[1] =0 ;
        for(int i = 2;i<=M;i++){
            up[i]=up[i-1]+sum+b*tmp;
            sum +=tmp;
            tmp +=K[i];
        }
        sum =0;
        down[M] = 0;
        tmp=K[M];
        
        for(int i = M-1;i>=1;i--){
            down[i]=down[i+1]+sum+a*tmp;
            sum +=tmp;
            tmp +=K[i];
        }
        
    int min=1;
    for(int i=1;i<=M;i++){
        ans[i] = down[i]+up[i];
//        DEBUG(ans[i]);
        if(ans[i]<ans[min]){
            min = i;
        }
        
    }
    cout<<min<<endl;
    }
    return 0;
    
}

