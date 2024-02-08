#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
int main(){
  ll n;cin>>n;
  for(ll k=1;k<=n;k++){
    ll ans=(k*k)*((k*k)-1)/2 - (4*(k-1)*(k-2));
    cout<<ans<<'\n';
  }
}