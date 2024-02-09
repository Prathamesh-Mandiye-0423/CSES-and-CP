#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;cin>>n;
  vector<pair<ll,ll>> v;
  for(ll i=0;i<n;i++){
    ll enter,o;
    cin>>enter>>o;
    v.push_back({enter,1});
    v.push_back({o,-1});
  }
  sort(v.begin(),v.end());
  int maxval=0;
  int people=0;
  for(ll i=0;i<v.size();i++){
    people+=v[i].second;
    maxval=max(maxval,people);
  }
  cout<<maxval<<'\n';
}