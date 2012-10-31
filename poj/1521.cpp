#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<complex>
#include<sstream>
#include<map>
#include<set>
#include<string>
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
    string s;
    while(cin>>s,s!="END"){
        map<char,int> m ;
        map<char,int>::iterator p;
        
        for(int i = 0 ;i<(int)s.length();++i){
            m[s[i]]++;
        }
        priority_queue<int,vector<int>,greater<int> > q;
        for(p=m.begin();p!=m.end();p++){
            q.push(p->second);

        }
        // for(p=m.begin();p!=m.end();p++){
        //     DEBUG(m[p->first]);
        // }
        
        int ans=0;
        while(q.size()>1){
            int a = q.top();q.pop();
            int b = q.top();q.pop();
            ans +=a;
            ans +=b;
            q.push(a+b);
        }

        if(m.size() == 1) ans = s.size();

        printf("%d %d %.1f\n",(int)s.size()*8,ans,s.size()*8.0/ans);

        
    }
    return 0;
  
}

