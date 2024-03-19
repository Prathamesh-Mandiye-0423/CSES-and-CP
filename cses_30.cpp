#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin>>n;
	vector<pair<ll,ll>>ans(n);
	for(ll i=0;i<n;i++){
		cin>>ans[i].first;
		ans[i].second=i+1;
	}
	vector<ll>ind;
	stack<pair<ll,ll>>st;
	for(ll i=0;i<n;i++){
		while(!st.empty() && st.top().first>=ans[i].first){
			st.pop();
		}
		if(st.empty()){
			ind.push_back(0);
		}
		else{
			ind.push_back(st.top().second);
		}
		st.push(ans[i]);
	}
	for(ll i=0;i<ind.size();i++){
		cout<<ind[i]<<" ";
	}
	cout<<'\n';
}