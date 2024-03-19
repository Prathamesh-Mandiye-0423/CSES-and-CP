#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	multiset<int> res;
    for(ll i=0;i<n;i++){
    	int k;cin>>k;
    	auto it=res.upper_bound(k);
    	if(it==res.end()){
    		res.insert(k);
    	}
    	else{
    		res.erase(it);
    		res.insert(k);
    	}
    }
    cout<<res.size()<<'\n';

}