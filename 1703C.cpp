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
    string str[n];
    int p;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> p >> str[i];
    }
        for(int j = 0 ; j < n ; j++)
        {
            for(int k = 0 ; k < str[j].length() ; k++)
            {
                if(str[j][k] == 'D')
                {
                    arr[j]++;
                    arr[j] = arr[j] % 10;
                }
                else
                {
                    arr[j]--;
                    if(arr[j] < 0)
                    arr[j] += 10;
                    arr[j] = arr[j] % 10;
                }
            }
        }
    // for(string pk : str)
    // {
    //     cout << pk << " ";
    // }
    // cout << endl;
    for(int i : arr)
    {
        cout << i << " ";
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
