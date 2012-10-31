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
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    memset(a,0,sizeof(a));
    int x=0;
    int y =0;
    int dir = 0;
    REP(i,m*n){
        a[x][y]=i+1;
        x+=dx[dir];
        y+=dy[dir];
        if(x<0||m<=x||y<0||n<=y||a[x][y]){
            x-=dx[dir];
            y-=dy[dir];
            dir=(dir+1)%4;
            x+=dx[dir];
            y+=dy[dir];
        }
    }

    REP(i,m){
        REP(j,n){
            cout<<"   "<<char((a[i][j]-1)%26+'A');
        }
        puts("");
    }
    return 0;
  
}

