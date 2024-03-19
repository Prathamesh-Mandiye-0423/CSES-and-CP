#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=100;
const int M_S=1e5;
bool dp[N+1][M_S+1];
int main(){
	ll n;cin>>n;
	vector<ll>coins(n);
	for(ll i=0;i<n;i++) cin>>coins[i];
	dp[0][0]=true;
	for(ll i=1;i<=n;i++){
		for(ll j=0;j<=M_S;j++){
			dp[i][j]=dp[i-1][j];
			ll prev=j-coins[i-1];
			if(prev>=0 && dp[i-1][prev]){
				dp[i][j]=true;
			}
		}
	}
	vector<ll>res;
	for(ll j=1;j<=M_S;j++){
		if(dp[n][j]){
			res.push_back(j);
		}
	}
	cout<<res.size()<<'\n';
	for(ll i=0;i<res.size();i++){
		cout<<res[i]<<' ';
	}
	cout<<'\n';


}