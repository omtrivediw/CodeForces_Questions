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
  int n,r,d;
  cin >> n;
  int room[n] , timing[n];
  vector<int> result;
  for(int i = 0 ; i < n ; i++)
  {
    cin >> room[i];
    cin >> timing[i];
  } 
  for(int i = 0 ; i < n ; i++)
  {
    if(timing[i] % 2 == 0)
    {
      result.pb(room[i] + ((timing[i] - 2) / 2));
    }
    else
    {
      result.pb(room[i] + ((timing[i] - 1) / 2));
    }
  }
  int m = *min_element(all(result));
  cout << m << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      solve();
    }
    return 0;
}
