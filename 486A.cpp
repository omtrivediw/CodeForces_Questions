#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n , oddc = 0 , evenc = 0 , evens = 0 , odds = 0;
    cin >> n;
    if(n % 2 == 0)
    {
        evenc = n / 2;
        oddc = n - evenc;
        evens = evenc*(evenc+1);
        odds = oddc * oddc;
        cout << evens - odds << endl;
    }
    else{
        oddc = (n / 2) + 1;
        evenc = n - oddc;
        evens = evenc*(evenc+1);
        odds = oddc * oddc;
        // cout << evenc << "->" << evens << " " << oddc << "->" << odds << endl;
        cout << evens - odds << endl;
    }
}
