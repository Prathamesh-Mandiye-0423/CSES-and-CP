#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;cin>>n;
  vector<pair<ll,ll>> v;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    v.push_back({b,a});//Switched start and end
  }
  sort(v.begin(),v.end());
  ll ans=1;
  ll curr=v[0].first;//End time of first movie
  //Error in previous logic if you sort accoording to start time check update of curr
  /*test case
  3
  1 1000
  2 3
  5 6
  #prev code logic
  ll n;cin>>n;
  vector<pair<ll,ll>> v;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    v.push_back({a,b});
  }
  sort(v.begin(),v.end());
  ll ans=1;
  ll curr=v[0].second;
  
  for(ll i=1;i<n;i++){
    if(curr<=v[i].first){      
      curr=v[i].second;
      ans++;
    }
  }

  */
  for(ll i=1;i<n;i++){
    if(curr<=v[i].second){      
      curr=v[i].first;
      ans++;
    }
  }
  cout<<ans<<'\n';
}