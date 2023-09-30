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
    int n,m=0,c=0;
    cin >> n;
    while(n--){
    int a,b;
    cin >> a >> b;
    if(a > b)m++;
    else if(b > a)c++;
    }
    if(m > c)cout << "Mishka" << endl;
    else if(c > m) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
}
int main()
{
    solve();
}
