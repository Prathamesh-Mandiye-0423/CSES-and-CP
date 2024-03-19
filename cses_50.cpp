#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const int N=2e5+1;
const int LOG=20;
ll x[N];
int m[N][LOG];
ll query(ll l,ll r){
	ll len=r-l+1;
	ll j=log2(len);
	return min(m[l][j],m[r-(1<<j)+1][j]);

}
int main(){
	int n,q;cin>>n>>q;	
	for(ll i=0;i<n;i++) {
		cin>>x[i];
		m[i][0]=x[i];
	}
	//PreProcess
	for(ll j=1;j<LOG;j++){
		for(ll i=0;i+(1<<j)-1<n;i++){
			m[i][j]=min(m[i][j-1],m[i+(1<<(j-1))][j-1]);
		}
	}
	while(q--){
		int l,r;
		cin>>l>>r;
		l--;r--;
		cout<<query(l,r)<<'\n';
	}


}