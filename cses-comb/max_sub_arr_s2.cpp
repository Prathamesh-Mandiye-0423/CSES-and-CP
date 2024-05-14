#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool check(ld x,ld c){
	ld val=x*x+sqrt(x);
	return (val>=c);
}
int main(){
	ll n,a,b;cin>>n>>a>>b;
	vector<ll>v(n+1);
	for(ll i=1;i<=n;i++) cin>>v[i];
	vector<ll>pref(n+1);
for(ll i=1;i<=n;i++){
	pref[i]=pref[i-1]+v[i];
}
set<pair<ll,ll>>s;
ll ans=-1e18;
for(int i=a;i<=b;i++){
	s.insert({pref[i],i});
}
for(int i=1;i<=n-a+1;i++){
	ans=max(ans,(s.rbegin())->first-pref[i-1]);//max_pref-min_pref
	s.erase({pref[i+a-1],i+a-1});//remove starting element
	if(i+b<=n){
		s.insert({pref[i+b],i+b});//insert new 

	}
}
cout<<ans<<'\n';
}
