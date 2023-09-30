#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char key;
    for(int i = 0 ; i < n-2 ; i++)
    {
        key = s[i];
        if(key != s[i+1])
        {
            for(int j = i + 2 ; j < n ; j++)
            {
                if(key == s[j])
                {
                    pn;
                    return;
                }
            }
        }
    }
    py;
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
