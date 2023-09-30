#include<bits/stdc++.h>
using namespace std;


int main()
{
   int a,b,c,d;
   cin >> a >> b >> c >> d;
   int m = max(a , max(b , max(c,d)));
   if(m == a)
   {
      cout << (m-b) << " " << (m-c) << " " << (m-d);
   }
   else if(m == b)
   {
      cout << (m-a) << " " << (m-c) << " " << (m-d);
   }
   else if(m == c)
   {
      cout << (m-a) << " " << (m-b) << " " << (m-d);
   }
   else
   {
      cout << (m-a) << " " << (m-c) << " " << (m-b);
   }
}
