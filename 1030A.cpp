#include<bits/stdc++.h>
using namespace std;

bool easyproblem(int arr[] , int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 1) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[101];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(easyproblem(arr, n)) cout << "EASY" << endl;
    else cout << "HARD" << endl;
}
