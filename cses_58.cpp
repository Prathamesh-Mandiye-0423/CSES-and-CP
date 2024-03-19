#include<bits/stdc++.h>
#define ll long long
using namespace std;

int grid[1001][1001];
ll dp[1001][1001];

void build(ll n){
	dp[0][0]=dp[1][0]=dp[0][1]=0;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			dp[i][j]=grid[i][j]+dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
		}
	}
}

ll getval(ll l,ll r){
	return dp[l][r];
}

ll query(ll x1,ll y1,ll x2,ll y2){
	return getval(x2,y2)-getval(x2,y1-1)-getval(x1-1,y2)+getval(x1-1,y1-1);
}
int main(){
	ll n,q;cin>>n>>q;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			char c;cin>>c;
			if(c=='*'){
				grid[i][j]=1;
			}
			else grid[i][j]=0;
		}
	}
	build(n);
	while(q--){
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<query(x1,y1,x2,y2)<<'\n';
	}
}