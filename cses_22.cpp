//Coin Piles
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll a,b;cin>>a>>b;
		int flag=1;
		if(max(a,b)>2*min(a,b)){
			flag=0;			
		}
		else if((a+b)%3==0){
			flag=1;
		}
		else{
			flag=0;
		}
		if(flag){
			cout<<"YES"<<'\n';
		}
		else{
			cout<<"NO"<<'\n';
		}
	}
}