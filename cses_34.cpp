#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	vector<ll> t(n);
	for(ll i=0;i<n;i++) cin>>t[i];
	ll sum=0;
	sort(t.begin(),t.end());
	for(ll i=0;i<n-1;i++){
		sum+=t[i];
	}
	if(sum<t[n-1]){
		cout<<2*t[n-1]<<'\n';
	}
	else{
		cout<<sum+t[n-1]<<'\n';
	}
}