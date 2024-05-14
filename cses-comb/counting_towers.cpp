#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
const int M=1e9+7;
int main() {   
    vector<ll>one(N+1),two(N+1);
    one[1]=two[1]=1;
    for(int i=2;i<N;i++){
        one[i]=(2*one[i-1]+two[i-1])%M;//if i-1 block had only one block
        //you can add two blocks of width 1 or you can add one block of width two
        two[i]=(4*two[i-1]+one[i-1])%M;//similarly there are 4 ways to use these 1 width blocks
        //and 1 way you can add a 2 width blocks

    }
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<(one[n]+two[n])%M<<'\n';
    }
}
