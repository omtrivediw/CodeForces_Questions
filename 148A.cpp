#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    int k,l,m,n,d,count = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    for(int i = 1 ; i <= d ; i++)
    {
        if(i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0)
        count++;
    }
    cout << count;
}
