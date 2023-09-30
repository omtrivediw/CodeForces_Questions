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
    for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    }
    int i = 0 , j = n-1, step = 1 , s=0 , d=0;
    while(i <= j)
    {
        if(step % 2 != 0)
        {
            if(arr[i] > arr[j])
            {
                s += arr[i];
                i++;
            }
            else
            {
                s += arr[j];
                j--;
            }
        }
        else
        {
            if(arr[i] > arr[j])
            {
                d += arr[i];
                i++;
            }
            else
            {
                d += arr[j];
                j--;
            }
        }
        step++;
        // i++;
        // j--;
    }
    cout << s << " " << d << endl;
}
int main()
{
    solve();
}
