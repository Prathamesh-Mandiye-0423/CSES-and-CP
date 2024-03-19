#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>tree;
//Building Tree
ll f(ll v,ll tl,ll tr,ll l,ll r,ll u){
	if(l<=tl && tr<=r){	
		if(u!=-1){
			tree[v]+=u;
		}	
		return tree[v];
	}
	if(tr<l || r<tl){
		return 0;
	}
	ll tm=(tl+tr)/2;
	ll sum= f(2*v,tl,tm,l,r,u)+f(1+2*v,tm+1,tr,l,r,u);
	//tree[v]=tree[2*v]+tree[2*v+1];
	return sum+tree[v];
}
/*void change(ll v,ll tl,ll tr,ll l,ll r,ll u){
	if((l<=tl) && tr<=r){
		tree[v]+=u;//increment by u
		return;
	}
	if(tr<l||r<tl){
		return;
	}
	int tm=(tl+tr)/2;
	change(2*v,tl,tm,l,r,u);
	change(2*v+1,tm+1,tr,l,r,u);
	tree[v]=tree[2*v]+tree[2*v+1];
}
*/
void update(int i,int v,int n){
	tree[n+i]+=v;
	for(ll j=(n+i)/2;j>=1;j/=2){
		tree[j]=tree[2*j]+tree[2*j+1];
	}
}


int main(){
	ll n,q;cin>>n>>q;
	vector<ll>a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	while(__builtin_popcount(n)!=1){
		/*a.push_back(0);*/n++;//Make powers even
	}
	tree.resize(2*n);
	//Build Tree
	for(int i=0;i<n;i++){
		tree[n+i]=a[i];
	}
	/*for(int i=n-1;i>=1;i--){
		tree[i]=tree[2*i]+tree[2*i+1];
	}*/
	while(q--){
		int type;cin>>type;
		if(type==1){
			int low,b,u;cin>>low>>b>>u;
			low--;b--;
			f(1,0,n-1,low,b,u);
		}
		else{
			ll k;cin>>k;
			k--;
			cout<<f(1,0,n-1,k,k,-1)<<'\n';
		}
	}
}