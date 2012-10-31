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
int main()
{
    int t;
    cin>>t;
    P a;
    priority_queue<P,vector<P>,greater<P> > q;    
    for(int i = 0 ;i < t ; i++){
        cin>>a.first>>a.second;
        q.push(a);
    }
    P tmp = q.top();
    q.pop();
    
    int temp_x=tmp.first;
    int temp_y=tmp.second;
    while(!q.empty()){
        // DEBUG(temp_x);
        // DEBUG(temp_y);
        P temp = q.top();
        q.pop();
        // DEBUG(temp.first);
        // DEBUG(temp.second);
        if(temp.first<=temp_y){
            temp_y=max(temp_y,temp.second);
            continue;
        }else{
            cout<<temp_x<<" "<<temp_y<<endl;
            temp_x=temp.first;
            temp_y=temp.second;
        }
        
    }
    cout<<temp_x<<" "<<temp_y<<endl;
    
    return 0;
  
}

