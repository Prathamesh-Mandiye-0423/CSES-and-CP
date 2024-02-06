#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string dna;cin>>dna;
  ll max_l=0;
  ll curr_l=0;
  char curr;
  for(ll i=0;i<dna.length();i++){
    if(dna[i]!=curr){
      max_l=max(max_l,curr_l);
      curr_l=1; //reset the current length
    }else{
      curr_l++;
    } 
    curr=dna[i];   
  }
  max_l=max(max_l,curr_l);
  
  cout<<max_l<<'\n';
}