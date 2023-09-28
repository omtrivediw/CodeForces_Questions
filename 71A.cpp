#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        char first = s[0];
        char last = s[n-1];
        if(n > 10){
        cout << first << n-2 << last << endl;
        }
        else{
            cout << s <<  endl;
        }
    }
}
