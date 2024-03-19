#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e7;
int c[N+1];

int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		++c[x];
	}
	for(int i=N;i;--i){
		int d=0;
		for(int j=i;j<=N;j+=i){
			d+=c[j];
		}
		if(d>1){
			cout<<i;
			break;
		}
	}
}