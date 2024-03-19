#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=8;//For 8x8 chessboard

int main(){
	vector<vector<bool>>blocked(N,vector<bool>(N));
	for(ll r=0;r<N;r++){
		string row;cin>>row;
		for(ll ch=0;ch<N;ch++){
			blocked[r][ch]=row[ch]=='*';
		}
	}
	vector<ll>Q(N);
	for(ll i=0;i<N;i++) Q[i]=i;
	int ok=0;
	do{
		ll check=1;
		for(ll ch=0;ch<N;ch++){
			if(blocked[Q[ch]][ch]){
				check=0;
				break;
			}
		}
		vector<bool> allowed(2*N-1);
		for(ll ch=0;ch<N;ch++){
			if(allowed[ch+Q[ch]]){
				check=0;
				break;
			}
			allowed[ch+Q[ch]]=true;
		}
		allowed=vector<bool>(2*N-1);
		for(ll ch=0;ch<N;ch++){
			if(allowed[Q[ch]-ch+N-1]){
				check=0;
				break;
			}
			allowed[Q[ch]-ch+N-1]=true;
		}
		if(check){
			ok++;
		}
	}while(next_permutation(Q.begin(),Q.end()));
	cout<<ok<<'\n';
}
