#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a , b;
   cin >> a >> b;
   int m = min(a,b);
   a = a-m;
   b = b-m;
   if((a+b) % 2 == 0)
   {
    cout << m << " " << (a+b) / 2;
   }
   else{
    cout << m << " " << ((a+b)-1) / 2;
   }
}
