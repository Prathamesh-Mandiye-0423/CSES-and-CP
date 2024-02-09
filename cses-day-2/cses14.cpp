#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n,x;cin>>n>>x;
  vector<pair<ll,ll>> v;
  for(ll i=0;i<n;i++){
    ll a;cin>>a;
    v.push_back({a,i});
  }
  sort(v.begin(),v.end());
  ll left=0;
  ll right=n-1;
  ll ind_l=-1;
  ll ind_r=-1;
  while(left<right){
    if(v[left].first+v[right].first<x){
      left++;
    }
    else if(v[left].first+v[right].first>x){
      right--;
    }
    else if(v[left].first+v[right].first==x){
      ind_l=v[left].second+1;
      ind_r=v[right].second+1;
      break;
    }
  }
  if(ind_l==-1 && ind_r==-1){
    cout<<"IMPOSSIBLE"<<'\n';
  }else{
    
    cout<<min(ind_l,ind_r)<<" "<<max(ind_r,ind_l)<<'\n';
  }
}