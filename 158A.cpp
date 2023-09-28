#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    int arr[100];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int test_place = arr[k-1];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0 and arr[i] >= test_place)
        {
            count++;
        }
    }
    cout << count << endl;

}
