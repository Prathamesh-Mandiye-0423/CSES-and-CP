//Missing coin sum
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
 
int main(){
    ll n;cin>>n;
    vector<ll> x(n);
    for(ll i=0;i<n;i++) cin>>x[i];
    sort(x.begin(),x.end());
    ll curr=1;
    if(x[0]!=1) {
        cout<<1<<'\n';
        return 0;
    }
    for(ll i=0;i<n;i++){
        if(curr+1<x[i]) break;
        curr+=x[i];
    }
    cout<<curr<<'\n';
}
