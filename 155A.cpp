#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = arr[0] , maxi = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > maxi or arr[i] < mini)
        {
            ans++;
        }
        if(arr[i] > maxi)
        maxi = arr[i];
        else if(arr[i] < mini)
        mini = arr[i];
       
    }
    cout << ans << endl;
}
