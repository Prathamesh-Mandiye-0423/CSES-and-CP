#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
//Matrix Exponentiation??
struct matrix{
	ll mat[2][2];
	matrix friend operator*(const matrix&a,const matrix&b){
		matrix c;
		for(ll i=0;i<2;i++){
			for(ll j=0;j<2;j++){
				c.mat[i][j]=0;
				for(ll k=0;k<2;k++){
					c.mat[i][j]+=a.mat[i][k]*b.mat[k][j];
					c.mat[i][j]%=mod;
				}
			}
		}
		return c;
	}
};

matrix expo(matrix base,ll n){
	matrix res{{
		{1,0},
		{0,1}
	}};
	while(n){
		if(n%2){
			res=res*base;
		}
		base=base*base;
		n>>=1;
	}
	return res;
}

ll fib(ll n){
	matrix base{{
		{1,1},
		{1,0}
	}};
	return (expo(base,n).mat[0][1])%mod;
}

int main(){
	ll n;cin>>n;
	/*vector<ll>dp(n+1);
	dp[0]=0;
	dp[1]=1;
	for(ll i=2;i<=n;i++){
		dp[i]=(dp[i-1]+dp[i-2])%mod;
	}
	cout<<(dp[n])%mod<<'\n';*/
	cout<<fib(n)%mod<<'\n';
}