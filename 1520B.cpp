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
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 1; i <= 9; i++)
    {
        ll x = i;
        while(x <= n)
        {
            ans++;
            x = x * 10 + i;
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
