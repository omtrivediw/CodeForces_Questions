#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int a,b,c;
         cin >> a >> b >> c;
         int tf = abs(a - 1);
         int ts = abs(b-c) + abs(c-1);
         if(tf < ts ) cout << 1 << endl;
         else if(ts < tf) cout << 2 << endl;
         else cout << 3 << endl;
   }   
}
