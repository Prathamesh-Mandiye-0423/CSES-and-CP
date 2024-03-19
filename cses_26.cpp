#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin >> n;
    deque<int> numbers(n);
    deque<int> leftnumbers;
    for(int i=0;i<n;i++) numbers[i]=i+1;
    while (numbers.size() > 1)
    {

        for (int i = 0; i < numbers.size(); i++)
            if (i %2== 1)
                cout << numbers[i] << " ";
            else
                leftnumbers.push_back(numbers[i]);

       

        if (numbers.size() %2== 1)
        {
            int first = leftnumbers[leftnumbers.size() - 1];
            leftnumbers.pop_back();
            leftnumbers.push_front(first);
            numbers.clear();
            numbers = leftnumbers;
        }
        else
            numbers = leftnumbers;
        leftnumbers.clear();
    }
    cout << numbers[0];
	
}
		
	