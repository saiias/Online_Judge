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
int main(){
    char s[32];
    while(gets(s)){
        int a=s[0]-'0';
        int b=s[2]-'0';
        int o=s[3]=='+';
        int c=s[4]-'0';
        int d=s[6]-'0';
        
        int p = a*d+(o?1:-1)*b*c;
        int q = b*d;
        for(int i =2;i<9;i++){
            while((p>=2||q>=2)&&p%i==0&&q%i==0) {
            p/=i;
            q/=i;
            }
        }
            if(q==1){
                cout<<p<<endl;
            }else{
                cout<<p<<"/"<<q<<endl;
            }
                
        
    }
    return 0;
  
}

