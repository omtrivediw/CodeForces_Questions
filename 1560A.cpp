#include<bits/stdc++.h>
using namespace std;

int solve(int k)
{
   int ans;
   int count = 0;
   int i = 1;
   while(1)
   {
         if(i % 3 != 0 and i % 10 != 3)
         {
            count++;
            ans = i;
         }
         if(count == k)
         {
            return ans;
         }
         i++;
         
   }
}


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      
      cout << solve(n) << endl;
   }   
}
