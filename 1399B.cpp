#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define py cout<<YES<<endl;
#define pn cout<<NO<<endl;
using namespace std;

int minimum(int arr[] , int n)
{
    int m = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] < m)
        {
            m = arr[i];
        }
    }
    return m;
}

void solve()
{
    int n;
    cin >> n;
    int temp =0;
    int farr[n],sarr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> farr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin >> sarr[i];
    }
    ll ans = 0;
    int fmin = 0 , smin = 0;
    fmin = minimum(farr,n);
    smin = minimum(sarr,n);
    int j = 0;
    for(int i = 0 ; i < n ; i++)
    { 
        if(farr[i] != fmin and sarr[j] != smin)
        {
            temp = min(farr[i] - fmin , sarr[j] - smin);
            ans += temp;
            farr[i] -= temp;
            sarr[j] -= temp;
        }
        j++;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(farr[i] != fmin)
        {
            ans += farr[i] - fmin;
        }
        if(sarr[i] != smin)
        {
            ans += sarr[i] - smin;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      solve();
    }
}
