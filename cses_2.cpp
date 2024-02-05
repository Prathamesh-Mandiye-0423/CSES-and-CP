#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;cin>>n;
  vector<ll> v(n-1);
  for(ll i=0;i<n-1;i++) cin>>v[i];
  ll val=n*(n+1)/2;
  ll sum=0;
  for(ll i=0;i<v.size();i++) sum+=v[i];
  cout<<(val-sum)<<'\n';
}