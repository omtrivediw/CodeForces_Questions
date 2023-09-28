#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int count = 0;
    cin >> t;
    while(t--)
    {
        int p,v,t;
        cin >> p >> v >> t;
        if((p + v + t) >= 2)
        {
            count++;
        }
    }
    cout << count;
}
