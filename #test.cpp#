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
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define INF 1000000
#define ll long long

using namespace std;

int k,m,ans[500],tmp[500];
ll b[500],one;

bool ok(ll lim,int st,int time){
	ll s=0; int cut=0;
	for(int i=st;i<m;i++){
		if(b[i]>lim)return 0;
		if(s+b[i]>lim){
			if(++cut>=time)return 0;
			s=b[i];
			//	DEBUG(s);
			
		}
		else s+=b[i];
	}
	return 1;
}
void rec(int c,int cut,ll s){
	if(ans[0]>=0)return;
	if(c==m){
		rep(i,m)ans[i]=tmp[i];
		return;
	}
	if(!ok(one,c,k-cut))return;
	
	if(c&&cut<k-1)
	{
		tmp[c-1]=1;
		rec(c+1,cut+1,b[c]);
		tmp[c-1]=0;
	}
	if(s+b[c]<=one)rec(c+1,cut,s+b[c]);
}
int main(){
	int T; scanf("%d",&T);
	rep(U,T){
		scanf("%d%d",&m,&k);
		ll sum=0;
		rep(i,m)scanf("%lld",b+i),sum+=b[i];
		
		ll lo=0,hi=sum,mid;
		while(lo+1<hi){
			mid=(lo+hi)/2;
			DEBUG(mid);
			
			if(ok(mid,0,k))hi=mid; else lo=mid;
		}
		one=hi;
		DEBUG(hi);
		
		rep(i,m)tmp[i]=0; ans[0]=-1;
		rec(0,0,0);
		
		rep(i,m){
			if(i)printf(ans[i-1]?" / ":" ");
			printf("%d",(int)b[i]);
		}
		puts("");
	}
	return 0;
}

