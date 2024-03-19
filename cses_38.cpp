#include<bits/stdc++.h>
#define ll long long
using namespace std;
//*Special check for (m-1)
//Refer CP ALgo
const int m= 1e9+7;
ll exp(ll a,ll b,ll m){
	if(b==0) return 1;
	ll res=exp(a,b/2,m);
	if(b%2){
		return (((res*res)%m)*a)%m;
	}
	else{
		return (res*res)%m;
	}
}
ll exp1(ll a,ll b,ll m){
	a%=m;
	ll res=1;
	while(b>0){
		if(b&1){
			res=res*a%m;
		}
		a=a*a%m;
		b>>=1;//Divide by 2
	}
	return res%m;
}

int main(){
	ll t;cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll power=exp(b,c,m-1);//From Fermat's Little Theorem Revise once more
		ll ans=exp(a,power,m);
		cout<<ans<<'\n';
	}
}