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
#define INF 100%0000
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

///////////////////////////////////////////////////////////////
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long N;
        int k;
        string s;
        cin>>k>>s>>N;
        string ans;
        for(int i =k-1; i >=0 ; i--){
            int temp=0;
            if(s[i]=='p'){
                temp =  1;
            }else{
                temp = -1;
            }
        

        if((N & 1) == 0){
            ans  = '0'+ans;
        }else{
            ans = '1'+ans;
            N -= temp;
                    
        }

        N = N >> 1;
        
        }

        if(N != 0) cout<<"Impossible"<<endl;
        else cout<<ans<<endl;
        
    }
    return 0;
}
