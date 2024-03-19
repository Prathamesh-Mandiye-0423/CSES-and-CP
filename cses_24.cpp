#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e7+10;
vector<bool> isP(N,1);//checks if prime
vector<int> lp(N,0),hp(N,0); //lowest prime and highest prime
void seive(){
	isP[0]=isP[1]=false;
	for(ll i=2;i<N;i++){
		if(isP[i]==true){
			for(int j=2*i;j<N;j+=i){
				isP[j]=false;
				hp[j]=i;
				if(lp[j]==0){
					lp[j]=i;
				}
			}
		}
	}
}

int main(){
	//Pre-Computation
	//Sieve implementation
	//seive();
	ll n;cin>>n;	
	while(n--){
		ll x;cin>>x;
		vector<ll>prime_factors;
		for(ll i=2;i*i<=x;i++){
			if(x%i==0){
				ll pow=0;
				while(x%i==0){
					pow++;
					x/=i;
				}
				prime_factors.push_back(pow);
			}

		}
		if(x!=1){
			prime_factors.push_back(1);
		}
		int ans=1;
		for(ll a: prime_factors){
			ans*=(a+1);
		}
		cout<<ans<<'\n';	
	}
}
	/*ll x;cin>>x;
		map<int,int>p_f;//prime factors
		while(x>1){
			int p_fac=hp[x];
			while(x%p_fac==0){
				x/=p_fac;
				p_f[p_fac]++;
			}
		}
		cout<<p_f[x]<<'\n';
		}
	/*ll n;cin>>n;
	for(ll i=0;i<n;i++){
		ll x;cin>>x;
		map<int,int>p_f;//prime factors
		while(x>1){
			int p_fac=hp[x];
			while(x%p_fac==0){
				x/=p_fac;
				p_f[p_fac]++;
			}
		}
		cout<<p_f[x]<<'\n';
		}*/

	
	
	

