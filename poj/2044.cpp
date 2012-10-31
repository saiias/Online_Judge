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

#define debug(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int n;
int m[365][16];
int con[365][4];
int main()
{
    while(cin>>n){
        rep(i,n)rep(j,16)scanf("%d",m[i]+j);
        rep(i,n)memset(con[i],4,0);

        
    }
    return 0;
  
}

