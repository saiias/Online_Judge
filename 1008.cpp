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
string haab[19] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
string tzo[20] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
int cals(string s)
{
  for(int i=0;i<19;i++){
    if(haab[i]==s) return i;
  }
  
}


int main()
{
  int n;
  cin >> n;
  int year,day;
  string month;
  vector<int> temp_year,temp_day;
  vector<string> temp_month;
  for(int i=0;i<n;i++){
    string t;   
    cin>>day>>t>>month>>year;
    int temp = year*365 + cals(month)*20 + day;
    temp_year.push_back(temp/260);
    temp_month.push_back(tzo[temp%20]);
    temp_day.push_back(temp%13+1);
  }

  cout<<n<<endl;
  
  for(int i=0;i< n;i++){
    cout<<temp_day[i]<<" "<<temp_month[i]<<" "<<temp_year[i]<<endl;
  }
  
  return 0;
  
}

