//Bit strings
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long



int main(){
    int n;cin>>n;
    //cout<<(1LL<<n)%mod<<'\n';
    int res=1;
    for(ll i=0;i<n;i++){
        res*=2;
        res%=mod;
    }
    cout<<res<<'\n';
}
