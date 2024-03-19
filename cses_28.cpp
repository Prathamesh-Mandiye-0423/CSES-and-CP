#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,x;cin>>n>>x;
	vector<pair<ll,ll>> ans(n);
	for(ll i=0;i<n;i++) {
		cin>>ans[i].first;
		ans[i].second=i+1;
	}
	sort(ans.begin(),ans.end());
	vector<ll>res;
	for(ll i=0;i<n;i++){
		ll l=i+1;
		ll r=n-1;
		while(l<r){
			ll target=ans[i].first+ans[l].first+ans[r].first;
			if(target==x){
				res.push_back(ans[i].second);
				res.push_back(ans[l].second);
				res.push_back(ans[r].second);
				break;
			}
			else if(target<x){
				l++;
			}
			else if(target>x){
				r--;
			}
		}
	}
	
	if(res.size()){
		for(ll i=0;i<3;i++){
		cout<<res[i]<<" ";
		}
	}
	else{
		cout<<"IMPOSSIBLE"<<'\n';
	}
	
	cout<<'\n';	
}