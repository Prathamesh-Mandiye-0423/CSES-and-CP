#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int Max_m = 2e5;

int n,q,arr[Max_m+1],p[Max_m+1],a,b;
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>arr[i];
	p[1]=arr[1];
	for(int i=2;i<=n;i++) p[i]=p[i-1]^arr[i];
	while(q--){
		cin>>a>>b;
		cout<<(p[a-1]^p[b])<<'\n';
	}	
}