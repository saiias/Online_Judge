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
const int dx[5]={-1,0,0,0,1};
const int dy[5]={0,-1,0,1,0};

int N,M;
int tile[16][16];
int opt[16][16];
int flip[16][16];

int get(int x,int y){
    int c = tile[x][y];
    REP(d,5){
        int x2=x+dx[d],y2=y+dy[d];
        if(0<=x2 && x2 < M && 0<=y2 && y2<N){
            c +=flip[x2][y2];
        }
    }
    return c%2;
}

int calc(){
    for(int i=1;i<M;i++){
        for(int j =0;j<N;j++){
            if(get(i -1,j) !=0){
                flip[i][j]=1;
            }
        }
    }
    for(int j=0;j<N;j++){
        if(get(M-1,j) !=0) return -1;
    }

    int res =0;
    REP(i,M)REP(j,N) res+=flip[i][j];

    return res;
}

void solve(){
    int res = -1;
    for(int i =0;i<1<<N;i++){
        memset(flip,0,sizeof(flip));
        for(int j = 0 ; j < N ; j++){
            flip[0][N-j-1] =i >> j & 1;
        }
        int num = calc();
        if(num >= 0 && (res <0 || res > num)){
                res =num;
                memcpy(opt,flip,sizeof(flip));
        }
    //     REP(i,M){
    //     REP(j,N){
    //         cout<<flip[i][j]<<" ";
    //     }
    //     puts("");
    // }
    // puts("");

    }



    if(res < 0){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        REP(i,M)REP(j,N){
            printf("%d%c",opt[i][j],j+1 == N?'\n':' ');
        }
    }
                
}
int main()
{
    cin>>M>>N;
    REP(i,M)REP(j,N){
        scanf(" %d",&tile[i][j]);
    }
    // REP(i,M){
    //     REP(j,N){
    //         cout<<tile[i][j]<<" ";
    //     }
    //     puts("");
    // }
    // puts("");

    solve();
    return 0;
  
}

