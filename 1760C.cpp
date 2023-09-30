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
    cin >> n;
    vector<int>vec;
    for(int i = 0 ; i < n ; i++)
    {
      cin >> k;
      vec.pb(k);
    }
    //find max element in vec
    int max = *max_element(vec.begin(),vec.end());
    // vector<int>ans(n);
    //copy vec into another vector
    vector<int>temp = vec;
    //sort temp
    sort(temp.begin(),temp.end());
    //find second max element in temp
    int second_maxi = temp[n-2];
    for(int i = 0 ; i < n ; i++)
    {
      if(vec[i] != max)
      {
        vec[i] = vec[i] - max;
      }
      else if(vec[i] == max)
      {
        // ans.pb(vec[i] - second_maxi);
        vec[i] = vec[i] - second_maxi;
      }
    }
    for(int i = 0 ; i < n ; i++)
    {
      cout << vec[i] << " ";
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
