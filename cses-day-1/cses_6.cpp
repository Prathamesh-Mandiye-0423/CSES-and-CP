//Ferris wheel
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> p(n);
    for(ll i=0;i<n;i++) cin>>p[i];
    sort(p.begin(),p.end());
    ll l=0;
    ll r=n-1;
    while(l<r){ //Two pointer 
        if(p[l]+p[r]<=x){
            n--;
            l++;
            r--;
        }
        else{
            r--;
        }
    }
    cout<<n<<'\n';

}
