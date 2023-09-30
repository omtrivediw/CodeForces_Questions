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
    int oc = 0 , tc = 0 , thc = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            oc++;
        }
        else if(arr[i] == 2)
        {
            tc++;
        }
        else
        {
            thc++;
        }
    }
    vector<int> v1 , v2 , v3;
    int mini = min(oc , min(tc , thc));
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            v1.pb(i+1);
        }
        else if(arr[i] == 2)
        {
            v2.pb(i+1);
        }
        else
        {
            v3.pb(i+1);
        }
    }
    cout << mini << endl;
    for(int i=0;i<mini;i++)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
}
int main()
{
    solve();
}
