#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;cin>>n;
    vector<ll> ans;
    if(n>3 || n<2){
        
    if(n%2==0){
        for(ll i=2;i<=n;i+=2){
            ans.push_back(i);
        }
        for(ll i=1;i<n;i+=2){
            ans.push_back(i);
        }
    }
    else{
        for(ll i=2;i<n;i+=2){
            ans.push_back(i);
        }
        for(ll i=1;i<=n;i+=2){
            ans.push_back(i);
        }
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    }
    else{
        cout<<"NO SOLUTION"<<'\n';
    }
}
