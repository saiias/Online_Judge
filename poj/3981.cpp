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
string replace(const string&in){
    string ans;
    int L =in.size();
//    DEBUG(L);
    for(int i = 0;i<L;){
        //  DEBUG(i);
        //   if(L-2<i) break;
        if(i<L-2&&in[i]=='y'&&in[i+1]=='o'&& in[i+2] == 'u'){
            ans.push_back('w');
            ans.push_back('e');
            i+=3;
        }else{
            ans.push_back(in[i]);
            i++;
        }
        
    }
    //  DEBUG(L);

    return ans;
}

int main(){
    string t;
    while(getline(cin,t)){
        cout<<replace(t)<<endl;
    }
    
    return 0;
  
}

