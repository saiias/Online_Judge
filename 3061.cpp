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
//template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;


///////////////////////////////////////////////////////////////
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N,S;
        cin>>N>>S;
        vector<int> temp(1000000);
        for(int i=0;i<N;i++){
            cin>>temp[i];
        }

        int res = N+1;
        int s=0,t=0,sum=0;
        for(;;){
            while(t<N&&sum<S){
                sum+=temp[t++];
            }
            if(sum<S) break;
            res=min(res,t-s);
            sum-=temp[s++];
        }
        if(res>N){
            res=0;
        }

        cout<<res<<endl;
                    
    }
    return 0;
  
}

