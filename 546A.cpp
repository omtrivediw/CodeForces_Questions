#include<iostream>
using namespace std;

int main()
{
   int k , n,  w;
   cin >> k >> n >> w;
   long int cost = 0;
   int i = 1;
   while(w)
   {
      cost += (k*i);
      i++;
      w--;
   }
   int to_borrow = cost - n;
   if(to_borrow > 0)
   {
      cout << to_borrow << endl;
   }
   else{
      cout << 0 << endl;
   }
}
