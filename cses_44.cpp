#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,X;cin>>n>>X;
	vector<ll> res(n);
	for(ll i=0;i<n;i++) cin>>res[i];
	ll pref=0;
	ll ans=0;
	map<ll,ll> sums;
	sums[0]=1;
	for(int x:res){
		pref+=x;
		ans+=sums[pref-X];
		sums[pref]++;
	}
	cout<<ans<<'\n';
}