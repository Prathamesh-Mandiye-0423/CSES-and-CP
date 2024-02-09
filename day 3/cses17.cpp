#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double


int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll d=v[n/2];
    ll ctr=0;
    for(ll i=0;i<n;i++) ctr+=abs(v[i]-d);
    cout<<ctr<<'\n';
}
