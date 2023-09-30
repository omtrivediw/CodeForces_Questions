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
    int count=0;
    int k = 1 , level = 0;
    while(count <= n)
    {
        count += (k*(k+1)) / 2;
        // cout << count << " ";
        k++;
        level++;
    }
    cout << level-1 << endl;
}
int main()
{
    solve();
}
