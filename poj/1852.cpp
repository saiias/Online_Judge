#include<iostream>
#include<vector>
using namespace std;

void resolve(int l,int n,vector<int>x ){
  int minT=0;
  for(int i=0;i<n;i++){
    minT=max(minT,min(x[i],l-x[i]));
  }

  int maxT=0;
  for(int i=0;i<n;i++){
    maxT=max(maxT,max(x[i],l-x[i]));
  }
  cout<<minT<<" "<<maxT<<"\n";
}

int main(){
  int l,n;
  vector<int> x;
  scanf("%d %d", &l, &n);
  x.resize(n);
  for(int i=0;i<n;i++){
    scanf("%d",&x[i]);
  }
  

  resolve(l,n,x);
  return 0;
}
