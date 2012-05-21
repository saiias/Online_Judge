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
#define INF 10000000
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;


///////////////////////////////////////////////////////////////
struct edge {int to,cost;};
int d[100000];

int dijkstra(int s,struct edge G[][128],int t){
    priority_queue<P,vector<P>,greater<P> > que;
    int result = 0;
    fill(d,d+100000,INF);
    d[s] = 0 ;
    que.push(P(0,s));
    while(!que.empty()){
        P p = que.top();que.pop();
        int v= p.second;
        if(d[v] < p.first) continue;
        for(int i = 0;i<(int)(sizeof(G[v])/sizeof(G[0][0]));++i){
            edge e = G[v][i];
            if(d[e.to]>d[v] +e.cost){
                //              if(e.to == 3) DEBUG(e.cost);
                d[e.to] = d[v] +e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
    for(int i = 1;i<=t;++i) {
//        DEBUG(d[i]);
        result = max(result,d[i]);
    }
    return result;
}

int main(){
    while(1){
        edge G[128][128];
        edge a;
        a.to=a.cost=0;
        REP(i,128)REP(j,128) G[i][j] =a;
                                  
        int t;
        cin>>t;
        if(t  == 0) break;
        for(int i = 1 ;i<=t;++i){
            int k ;
            cin>>k;
            for(int j = 0 ;j<k; ++j){
                cin>>G[i][j].to>>G[i][j].cost;
//                DEBUG(G[i][j].to);
            }
        }

        int result = INF;
        int r = 0;
        for(int i  = 1;i<=t;++i){
            int temp = dijkstra(i,G,t);
            //          DEBUG(temp);
            if(temp < result){
                r = i;
                result = temp;
            }
        }
        
        if(result==INF) cout<<"disjoint"<<endl;
        else{
        cout<<r<<" "<<result<<endl;
        }
    }
    
        return 0;
  
}


