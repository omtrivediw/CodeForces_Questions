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
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        {
            sum+=4;
        }
        else if(s=="Cube")
        {
            sum+=6;
        }
        else if(s=="Octahedron")
        {
            sum+=8;
        }
        else if(s=="Dodecahedron")
        {
            sum+=12;
        }
        else if(s=="Icosahedron")
        {
            sum+=20;
        }
    }
    cout<<sum<<endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    // {
      solve();
    // }
}
