#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
using namespace std;
void solve()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s == "yes")
    {
        py
    }
    else
    {
        pn
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
