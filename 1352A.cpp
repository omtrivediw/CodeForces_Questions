#include<bits/stdc++.h>
using namespace std;

int poweroften(int n)
{
    int res = 1;
    while(n--)
    {
        res *= 10;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        vector<int>arr;
        if(n % 10 != 0)
        {
            arr.push_back(n % 10);
            // ans++;
        }
        n /= 10;
        int i = 1;
        while(n != 0)
        {
            arr.push_back((n % 10) * (poweroften(i)));
            // ans++;
            i++;
            n /= 10;
        }
        // cout << ans << endl;
        for(int i : arr){
        if(i != 0)
        ans++;}
        cout << ans << endl;
        for(int i : arr)
        {
            if(i != 0){
            cout << i << " ";}
        }
        cout << endl;

    }
}
