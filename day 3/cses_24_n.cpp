#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e7+10;
//vector<bool> isP(N,1);//checks if prime
//vector<int> lp(N,0),hp(N,0); //lowest prime and highest prime
/*void seive(){
vector<ll>pfs;
/*void seive(){
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
}*/
int lp[N+1];//lowest prime factor
vector<int> pfs; 
int main(){
	for(int i=2;i<=N;i++){
		if(!lp[i]){
			pfs.push_back(i);
			lp[i]=i;
		}
		for(int j=0;j<pfs.size() && pfs[j]<=lp[i]&& i*pfs[j]<=N;j++){
			lp[i*pfs[j]]=pfs[j];
		}
	}
	
	ll n;cin>>n;
	while(n--){
		map<ll,ll>mp;
		ll x;cin>>x;
		while(x>1){
			mp[lp[x]]++;
			x/=lp[x];
		}
		ll ans=1;
		for(auto p: mp){
			ans*=(p.second+1);
		}
		cout<<ans<<'\n';
	}
}