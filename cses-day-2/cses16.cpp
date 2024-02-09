#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Check Kadane's algo
int main(){
  ll n;cin>>n;
  vector<ll>x(n);
  for(ll i=0;i<n;i++){
    cin>>x[i];
  }
  ll max_val=INT_MIN;
  ll curr=0;
  for(ll i=0;i<n;i++){
    if(curr+x[i]>=x[i]){ //if addition of curr value increases sum or decreases
      curr+=x[i];
    }
    else{
      curr=x[i];
    }
    max_val=max(max_val,curr);    
  }
  cout<<max_val<<'\n';
}
