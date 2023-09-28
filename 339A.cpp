#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    string res = "";
    if(len == 1) cout << s;
    else
    {
        int count1 = 0 , count2 = 0 , count3 = 0;
        for(int i = 0 ; i < len ; i++)
        {
            if(s[i] == '1') count1++;
            else if(s[i] == '2') count2++;
            else if(s[i] == '3') count3++;
        }
        for(int i = 0 ; i < count1 ; i++)
        {
            res += '1';
            res += '+';
        }
        for(int i = 0 ; i < count2 ; i++)
        {
            res += '2';
            res += '+';
        }
        for(int i = 0 ; i < count3 ; i++)
        {
            res += '3';
            res += '+';
        }
    res = res.substr(0 , res.length()-1);
    cout << res;
    }
}
