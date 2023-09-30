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
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string s4=s1+s2;
    int first[26]={0},second[26]={0};
    for(int i=0;i<s4.size();i++)
    {
        first[int(s4[i]) - 65]++;
    }
    for(int i=0;i<s3.size();i++)
    {
        second[int(s3[i]) - 65]++;
    }
    for(int i=0;i<26;i++)
    {
        if(first[i]!=second[i])
        {
            pn;
            return;
        }
    }
    py;
}
int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    // {
      solve();
    // }
}
