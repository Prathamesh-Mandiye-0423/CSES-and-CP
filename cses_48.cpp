#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1000100];
int main(){
	ll n,x;cin>>n>>x;
	vector<ll>c(n);
	for(ll i=0;i<n;i++) cin>>c[i];
	for(ll i=0;i<=x;i++){
		if(i==0){
			dp[i]=0;
		}
		else{
			dp[i]=1e9;
			for(ll j=0;j<n;j++){
				if(c[j]<=i) dp[i]=min(dp[i],1+dp[i-c[j]]);
			}
		}
	}
	if(dp[x]>=1e9) cout<<-1<<'\n';
	else cout<<dp[x]<<'\n';
}