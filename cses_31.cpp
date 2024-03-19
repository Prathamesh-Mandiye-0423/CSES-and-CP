#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll n,t;cin>>n>>t;
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	ll ctr=v[0];
	while(ctr<=t){
		ctr+=v[0];
	}
	cout<<ctr<<'\n';
}