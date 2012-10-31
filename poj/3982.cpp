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

string ret;

///////////////////////////////////////////////////////////////
string connect(const string&s1,const string&s2){
    ret.clear();
    int a1 = s1.size();
    int a2 = s2.size();
    int c =0;
    REP(i,max(a1,a2)){
        int t = c;
        if(i<a1) t+=s1[a1-i-1]-'0';
        if(i<a2) t+=s2[a2-i-1]-'0';
        c = t/10;
        t%=10;
        ret+=t+'0';
    }
    if(c) ret +=c+'0';
    reverse(ret.begin(),ret.end());
        
    return ret;
}
int main(){
    string a[100];
    while(cin>>a[0]>>a[1]>>a[2]){
    for(int i =3;i<100;i++){
        a[i] = connect(a[i-1],connect(a[i-2],a[i-3]));
    }
    cout<<a[99]<<endl;
    }
    return 0;
}

