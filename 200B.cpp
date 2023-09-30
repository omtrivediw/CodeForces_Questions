#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n;
    cin >> n;
    float arr[101];
    float s = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        s += (arr[i] / 100);
        // cout << s << endl;
    }
    cout << (s / n) * 100 << endl;
    // cout << s << " " << n << endl;

}
