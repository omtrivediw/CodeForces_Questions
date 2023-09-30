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

int maximum(int arr[], int n)
{
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > m)
            m = arr[i];
    return m;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int maxi = maximum(arr, n);
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] != maxi)
        {
            count += maxi - arr[i];
        }
    }
    cout << count << endl;
}
int main()
{
    solve();
}
