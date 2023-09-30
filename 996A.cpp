#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int arr[] = {100, 20, 10, 5, 1};
    for(int i : arr)
    {
        ans += n / i;
        n %= i;
    }
    cout << ans << endl;
}
