#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,tot=0,res=INT_MAX;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
		tot+=a[i];
	}
	for(ll i=0;i<(1<<n);i++){
		ll s=0;
		for(ll j=0;j<n;j++){
			if(i&1<<j) s+=a[j];
		}
		ll curr=abs((tot-s)-s);
		res=min(res,curr);

	}
	cout<<res;
}