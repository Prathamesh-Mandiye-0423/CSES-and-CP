#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n;cin>>n;
  vector<pair<ll,ll>> coord;
  for(ll i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    coord.push_back({x,y});
  }
  ll ans=0;
  for(ll i=0;i<n-1;i++){
    ans+=(coord[i].first*coord[i+1].second-coord[i+1].first*coord[i].second);
  }
  ll res=(coord[n-1].first*coord[0].second-coord[0].first*coord[n-1].second);
  ans+=res;
  cout<<abs(ans)<<'\n';
}