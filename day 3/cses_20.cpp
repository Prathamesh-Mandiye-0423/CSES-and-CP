//Removing digts
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
 
ll solve(ll x){
    ll max_l=0;
    while(x){
        ll r=x%10;
        max_l=max(r,max_l);
        x=x/10;
    }
    return max_l;
}
 
int main(){
    ll n;cin>>n;
    /*vector<ll>x(n);
    for(ll i=0;i<n;i++) cin>>x[i];*/
    ll curr=n;
    ll ctr=0;
    while(curr){
        curr-=solve(curr);
        ctr++;
    }
    cout<<ctr<<'\n';
}
