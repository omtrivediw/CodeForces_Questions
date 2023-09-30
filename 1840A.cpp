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
    string s;
    cin >> s;
    string res = "";
    for(int i = 0 ; i < n-1 ; i++)
    {
      for(int j = i+1 ; j < n ; j++)
      {
        if(s[i] == s[j])
        {
          res += s[i];
          i = j;
          break;
        }
      }
    }
    cout << res << endl;
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
