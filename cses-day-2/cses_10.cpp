#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
int main(){
  ll n;cin>>n;
  vector<ll> dp(n+1);
  dp[0]=1;
  for(ll i=1;i<=n;i++){
    ll j=1;
    while(j<=6 && i>=j){
      dp[i]=(dp[i]+dp[i-j])%mod;
      j++;
    }
  }
  cout<<dp[n]<<'\n';
}
