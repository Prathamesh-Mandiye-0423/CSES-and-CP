#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;cin>>n;
    vector<ll> x(n);
    for(ll i=0;i<n;i++) cin>>x[i];
    ll ctr=0;
    for(ll i=1;i<n;i++){
        if(x[i-1]>x[i]){
            ctr+=abs(x[i]-x[i-1]); // how many times this element has to be incremented to be made equal
            x[i]=x[i-1];//now both elements are equal
        }
    }
    cout<<ctr<<'\n';

}
