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
    int n;
    cin >> n;
    int arr[n];
    // int count = 0;
    int oz = 0 , zo = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        if(i % 2 == 0 and arr[i] % 2 == 1)
        {
            zo++;
        }
        else if(i % 2 == 1 and arr[i] % 2 == 0)
        {
            oz++;
        }
    }
    if(oz == zo)
    {
        cout << oz << endl;
    }
    else
    cout << -1 << endl;
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
