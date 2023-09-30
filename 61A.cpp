#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    string res = "";
    for(int i = 0 ; i < s1.length() ; i++)
    {
        if(s1[i] != s2[i]) res += '1';
        else  res += '0';
    }
    cout << res << endl;

}
