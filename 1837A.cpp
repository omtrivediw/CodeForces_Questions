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
    int n,k;
    cin >> n >> k;
    if(n % k != 0)
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << n-1 << " " << 1 << endl;
    }
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
