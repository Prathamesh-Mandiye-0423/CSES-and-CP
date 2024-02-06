#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;cin>>n;
  vector<ll> x(n);
  for(ll i=0;i<n;i++) cin>>x[i];
  set<ll> res;
  for(ll i=0;i<n;i++) res.insert(x[i]);
  cout<<res.size()<<'\n';
}