#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
const int N=1e5+10;
int main(){
	int n;cin>>n;
	vector<string>ans;
	ans.push_back("");
	for(int i=0;i<n;i++){
		int sz=ans.size();
		for(int j=sz-1;j>=0;j--){
			ans.push_back(ans[j]);
		}
		sz*=2;//{0,1,1,0}
		for(int j=0;j<sz;j++){
			if(j<(ans.size()/2)){
        //to first half add 0 to second add 1
        //{00,10,11,01}
				ans[j]+="0";
			}
			else ans[j]+="1";
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<'\n';
	}

}
