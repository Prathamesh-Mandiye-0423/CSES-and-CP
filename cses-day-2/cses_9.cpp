#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

 
 
int main(){
    ll t = 1;
    cin >> t;
    while (t--){
        ll x, y;
        cin >> x >> y;
        if (y > x){
            if (y%2==1){
                cout << y * y - x + 1 << endl;
            }
            else{
                cout << (y - 1) * (y - 1) + x << endl;
            }
        }
        else if (x > y){
            if (x%2==1){
                cout << (x - 1) * (x - 1) + y << endl;
            }
            else{
                cout << x * x - y + 1 << endl;
            }
        }
        else{
            cout << x * x - y + 1 << endl;
        }
    }
    
}
