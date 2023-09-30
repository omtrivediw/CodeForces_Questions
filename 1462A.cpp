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
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int i = 0 , j = n -1;
    vector<int>res;
    int count = 1;
    while(i <= j)
    {
        if(count % 2 != 0)
        {
            res.pb(arr[i]);
            i++;
        }
        else
        {
            res.pb(arr[j]);
            j--;
        }
        count++;
    }
    for(int i = 0 ; i < res.size() ; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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
