#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

int main(){
	ll n,x;cin>>n>>x;
	vector<ll>c(n);
	for(ll i=0;i<n;i++) cin>>c[i];
	vector<ll>dp(x+1,0);
	dp[0]=1;//dp[x]=no. of ways you can make x therefore o can be made by an empty set
	for(ll i=1;i<=x;i++){
		for(ll j=0;j<n;j++){
			if(i-c[j]>=0){
				(dp[i]+=dp[i-c[j]])%=mod;
			}
		}
	}
		
	cout<<dp[x]<<'\n';
}