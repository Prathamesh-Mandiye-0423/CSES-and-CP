#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	ll sum=(n*(n+1))/2;
	if(sum%2){
		cout<<"NO"<<'\n';

	}
	else{
		cout<<"YES"<<'\n';
		set<ll> s1,s2;
		ll t=sum/2;
		int check=n;
		for(ll i=1;i<=n;i++) s1.insert(i);
		while(s1.count(t)==0){
			t-=check;
			s2.insert(check);
			s1.erase(check);
			check--;
		}
		s1.erase(t);
		s2.insert(t);
		cout<<s1.size()<<'\n';	
		for(int x:s1) cout<<x<<" ";
		cout<<'\n';
		cout<<s2.size()<<'\n';
		for(int x:s2) cout<<x<<" ";
		cout<<'\n';

	}
}