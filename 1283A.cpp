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
    int a,b;
    cin >> a >> b;
    int sum = ((24 - (a+1)) * 60) + (60 - b);
    cout << sum << endl;
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
