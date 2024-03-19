#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

ll modular(ll a,ll b){
	ll res = 1;
    while(b > 0){
        if(b&1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main(){
	int n;cin>>n;
	while(n--){
		ll a,b;cin>>a>>b;
		cout<<modular(a,b)%mod<<'\n';
	}
}