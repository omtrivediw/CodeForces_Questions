#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1 or n == 2) cout << 0 << endl;
        else{
            if(n % 2 != 0)
            cout << n / 2 << endl;
            else
            cout << (n-1) / 2 << endl;
        }
    }
}
