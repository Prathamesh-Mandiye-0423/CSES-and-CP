#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string a;cin>>a;
	vector<string> perm;
	sort(a.begin(),a.end());
	do{
		perm.push_back(a);
	}while(next_permutation(a.begin(),a.end()));
	cout<<perm.size()<<'\n';
	for(string x:perm){
		cout<<x<<'\n';
	}
}