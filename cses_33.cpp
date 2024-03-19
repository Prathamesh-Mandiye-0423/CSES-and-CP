#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	vector<ll> x(n);
	vector<ll>ind(n+1);
	ll ctr=1;
	for(int i=0;i<n;i++){
		cin>>x[i];
		ind[x[i]]=i;
	}
	for(ll i=1;i<=n;i++){
		if(ind[i]<ind[i-1]){
			ctr++;
		}
	}
	cout<<ctr<<'\n';
}