#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,x;cin>>n>>x;
	vector<ll>a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	ll sum=0;
	ll ctr=0;
	ll i=0;ll j=0;
	while(i<n){
		sum+=a[i];
		while(sum>=x){
			if(sum==x){
				ctr++;
			}
			sum-=a[j];
			j++;
		}
		i++;	
		
	}
	cout<<ctr<<'\n';
}