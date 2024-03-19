#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,q;cin>>n>>q;
	vector<ll>ans(n);
	for(ll i=0;i<n;i++) cin>>ans[i];
	ll a,b;
	vector<ll>sum(n+1);
	for(ll i=1;i<=n;i++){
		sum[i]=sum[i-1]+ans[i-1];
	}
	while(q--){
		cin>>a>>b;		
		cout<<sum[b]-sum[a-1]<<'\n';
	}	
}