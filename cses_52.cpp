#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	unordered_map<ll,ll> mp;
	ll sum=0;
	mp[0]++;
	ll res=0;
	for(ll i=0;i<n;i++){
		sum=(sum+a[i]%n+n)%n;
		res+=mp[sum];
		mp[sum]++;
	}
	cout<<res<<'\n';

}