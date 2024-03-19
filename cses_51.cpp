#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	map<ll,ll>mp;
	vector<ll>k(n);
	for(ll i=0;i<n;i++) cin>>k[i];
	ll ans=0;
	ll j=0;
	for(ll i=0;i<n;i++){
		while(j<n && mp[k[j]]<1){
			mp[k[j]]++;
			++j;
		}
		ans=max(j-i,ans);
		mp[k[i]]--;
	}
	cout<<ans<<'\n';

}