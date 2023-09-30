#include<bits/stdc++.h>
using namespace std;

int vanyaandfence(int arr[] , int size , int height)
{
   int count = 0;
   for(int i = 0 ; i < size ; i++)
   {
      if(arr[i] > height) count += 2;
      else count++;
   }
   return count;
}

int main()
{
   int n , h;
   cin >> n >> h;
   int arr[1001];
   for(int i = 0 ; i < n ; i++)
   {
      cin >> arr[i];
   }
   int count = vanyaandfence(arr , n , h);
   cout << count;
}
