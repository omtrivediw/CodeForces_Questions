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
    int arr1[n];
    vector<int> arr2(n);
    ll ans = 0;
    for(int i = 0 ; i < n ; i++){
    cin >> arr1[i];
    ans += arr1[i];
    }
    for(int i = 0 ; i < n ; i++)
    cin >> arr2[i];
    sort(all(arr2));
    for(int i = 0 ; i < n-1 ; i++)
    ans += arr2[i];
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
