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

#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
using namespace std;
///////////////////////////////////////////////////////////////

int main()
{
  double x,y;
  complex<double> gopher,dog,hole;
  
  cin>>x>>y;
  gopher=complex<double>(x,y);
  cin>>x>>y;
  dog=complex<double>(x,y);

  while(cin>>x>>y){
    hole = complex<double>(x,y);
    if(2*abs(hole-gopher) <=abs(hole-dog)){
      printf("The gopher can escape through the hole at (%.3f,%.3f). \n",x,y);
      return 0;
      
    }
    
  }
  
  cout<<"The gopher cannot escape."<<endl;
  
  return 0;
  
}

