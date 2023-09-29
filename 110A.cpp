#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n;
   cin >> n;
   int count = 0;
   bool flag = true;
   while(n)
   {
      if(n % 10 == 4 or n % 10 == 7)
      {
         count++;
      }
      n /= 10;
   }
   if(count == 0) cout << "NO" << endl;
   else{
   while(count)
   {
      if(count % 10 != 4 and count % 10 != 7)
      {
         flag = false;
         cout << "NO" << endl;
         break;
      }
      count /= 10;
   }
   if(flag)
   {
      cout << "YES" << endl;
   }
   }
}
