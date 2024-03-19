#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int l,int r,int m,int n){
	if(n<=0) return;
	solve(l,m,r,n-1);
	cout<<l<<" "<<r<<'\n';
	solve(m,r,l,n-1);
}
int main(){
	int n;cin>>n;
	cout<<(1<<n)-1<<'\n';
	solve(1,3,2,n);
}