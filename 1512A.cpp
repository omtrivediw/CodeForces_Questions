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
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
      cin >> v[i];
    }
    int arr[101] = {0};
    for(int i=0;i<n;i++)
    {
      arr[v[i]]++;
    }
    int ans = 0;
    for(int i = 0 ; i < 101 ; i++)
    {
      if(arr[i] == 1)
      {ans = i;
      break; }   }
    for(int i=0;i<n;i++)
    {
      if(v[i] == ans)
      {
        cout << i+1 << endl;
        return;
      }
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
