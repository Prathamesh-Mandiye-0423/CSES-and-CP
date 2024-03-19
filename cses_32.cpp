#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n;cin>>n;
	vector<pair<int,int>> d(n);
	for(int i=0;i<n;i++){
		cin>>d[i].first>>d[i].second;
	}
	sort(d.begin(),d.end());
	ll reward=0;
	ll t=0;
	for(int i=0;i<n;i++){
		t+=d[i].first;
		reward+=d[i].second-t;
	}
	cout<<reward;
	
}