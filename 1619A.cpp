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
    int n = s.length();
    if(n % 2 != 0)
    {
        pn;
        return;
    }
    string half1 = s.substr(0 , n/2);
    string half2 = s.substr(n/2 , n/2);
    if(half1 == half2)
    {
        py;
        return;
    }
    else{
        pn;
        return;
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
