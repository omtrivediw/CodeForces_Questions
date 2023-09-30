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
    float a,b,c;
    cin >> a >> b >> c;
    float diff = abs(a-b);
    float temp = diff / (2*c);
    if(c > diff and diff)
    cout << 1 << endl;
    else
    cout <<ceil(temp)<< endl;

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
