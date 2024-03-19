#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
int dp[1001][1001];
int main(){
	ll n;cin>>n;
	vector<string> grids(n);
	for(ll i=0;i<n;i++){
		cin>>grids[i];
	}
	vector<vector<ll>> paths(n,vector<ll>(n));
	paths[0][0]=(grids[0][0]=='.');
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grids[i][j]!='*'){
				if(i-1>=0 && grids[i-1][j]!='*'){
					paths[i][j]=(paths[i-1][j]+paths[i][j])%mod;
				}
				if(j-1>=0 && grids[i][j-1]!='*'){
					paths[i][j]=(paths[i][j]+paths[i][j-1])%mod;
				}
				
			}
		}

	}
	cout<<paths[n-1][n-1]<<'\n';
}