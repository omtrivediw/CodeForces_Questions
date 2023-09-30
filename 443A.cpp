#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    string s;
    getline(cin , s);
    int count = 0;
    int arr[26] = {0};
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(int(s[i]) >= 97 and int(s[i]) <= 122)
        {
            arr[int(s[i]) - 97]++;
        }
    }
    for(int i : arr)
    {
        if(i > 0) count++;
        // cout << i << " ";
    }
    cout << count << endl;
    }
