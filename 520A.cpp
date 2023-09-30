#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    string s;
    cin >> s;
    int arr[26] = {0};
    int sum  = 0;
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    for(char i : s)
    {
        arr[int(i) - 97]++;
    }
    for(int i : arr)
    {
        if (i == 0)
        {
            flag = true;
            break;
        }
    }
    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
}
