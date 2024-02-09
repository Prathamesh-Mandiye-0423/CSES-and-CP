//Trailing zeros
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n;cin>>n;
  
  ll res=0;

  while(n){
    res+=n/5;
    n=n/5;
  }
  cout<<res<<'\n';
}
