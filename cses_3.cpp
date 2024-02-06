#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,m,k;cin>>n>>m>>k;
  vector<ll> a(n),b(m);
  for(ll i=0;i<n;i++) cin>>a[i];
  for(ll i=0;i<m;i++) cin>>b[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  ll j=0,count=0;//j To move the pointer for each appartment
  for(int i=0;i<n;i++){
    while(j<m){
      if(b[j]<a[i]-k){// Present apartment is small
        j++;
      }
      else if(b[j]>a[i]+k){
        break; //The house is to big no point in checking further as the vector is already sorted
      }
      else{
        j++;
        count++;// found the apartment
        break;
      }
    }
  }
  cout<<count<<'\n';  
}