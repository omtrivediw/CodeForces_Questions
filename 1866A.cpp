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
    int n,num,mini = INT_MAX;
    cin >> n;
    vector<int>vec;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> num;
        vec.pb(num);
    }
    for(int i = 0 ; i < n ; i++)
    {
        mini = min(mini , abs(0-vec[i]));
    }
    cout<<mini<<endl;
}
int main()
{
    // int t;
    // cin >> t;
    solve();
}
