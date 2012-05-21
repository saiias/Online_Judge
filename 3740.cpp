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


int w,h;
int m[300];
bool flag[300];
///////////////////////////////////////////////////////////////
bool dfs(int row){
    if(row ==h){
        REP(i,w) if(!flag[i]) return false;
        return true;
    }
    bool ok=true;
    REP(i,w){
        if(flag[i]&&(m[i]&1<<row)){
            ok = false;
            break;
    }
    }
    if(ok){
        REP(i,w){
            flag[i]^=!!(m[i]&1<<row);
        }
        if(dfs(row+1)) return true;

        REP(i,w) flag[i]^=!!(m[i]&1<<row);
    }
    return dfs(row+1);
}

int main(){
    while(scanf("%d%d",&w,&h)!=EOF){
        memset(m,0,sizeof(m));
        for(int i =0;i<w;i++){
            for(int j = 0;j<h;j++){
                int temp;
                cin>>temp;
                if(temp){
                    m[j]=1<<i;
                }
            }
        }
        memset(flag,0,sizeof(flag));
        cout<<(dfs(0)? "Yes, I found it":"It is impossible")<<endl;
        
    }
    return 0;
  
}

