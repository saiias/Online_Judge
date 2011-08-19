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

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////
int main()
{
  while(1){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    //    cin>>a>>b>>c>>d;
    if(a==0&&b==0&&c==0&&d==0){
      break;
    }

//     ta=abs(a-b);
//     tb=abs(b-c);
//     tc=abs(c-d);

    cout<<720+((a-b+40)%40)*9+360+((c-b+40)%40)*9+((c-d+40)%40)*9<<endl;
    
    
    //    cout<<ans<<endl;
    
  }
  
  return 0;
  
}

