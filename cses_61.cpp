#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
const int N=2e6;
vector<ll>f(N,1);
vector<ll>inv(N,1);

ll bin(ll x,ll n,ll m){
	x%=m;
	ll res=1;
	while(n>0){
		if(n%2){
			res=res*x%m;
		}
		x=x*x%m;
		n/=2;
	}
	return res;
}

ll coefb(int n,int k){
	return f[n]*inv[k]%mod*inv[n-k]%mod;
}
int main(){
	for(int i=2;i<N;i++){
		f[i]=i*f[i-1]%mod;
	}
	inv[N-1]=bin(f[N-1],mod-2,mod);
	for(int i=N-2;i>0;i--){
		inv[i]=(i+1)*inv[i+1]%mod;
	}
	ll n;cin>>n;
	
	cout<<coefb(2*n,n)/(n+1);
}