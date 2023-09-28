#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s , t;
    cin >> s;
    cin >> t;
    int n = s.length();
    int i = 0 , j = 0;
    bool flag = true;
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    transform(t.begin() , t.end() , t.begin() , ::tolower);
    while(i < n && j < n)
    {
    if(s[i] == t[j])
    {
        i++;
        j++;
    }
    else
    {
        flag = false;
        if(s[i] < t[j])
        {
            cout << -1 <<  endl;
            break;
        }
        else
        {
            cout << 1 << endl;
            break;
        }
    }
}
if(flag)
cout << 0 << endl;
}
