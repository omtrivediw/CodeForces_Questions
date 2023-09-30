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
    int a,b,c;
    cin >> a >> b >> c;
    if(c < a and b != 0)
    {
        cout << b << endl;
        return;
    }
    int div = c % a;
    int ans = c - div - (a-b);
    int temp = (ans + a) % a;
    if(div == b) cout << c << endl;
    
    else{
        if(ans < 0) cout << 0 << endl;
        else if(temp == b and (ans+a) <= c) cout << ans+a << endl;
        else cout << ans << endl;
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
