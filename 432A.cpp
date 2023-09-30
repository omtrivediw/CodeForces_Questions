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
    int arr[n];
    int count=0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        arr[i] = abs(5 - arr[i]);
    }
    for(int i : arr)
    {
        if(i >= k)
        count++;
    }
    cout << count / 3 << endl;
}
int main()
{
    solve();
}
