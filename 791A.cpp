#include<iostream>
using namespace std;

int bearandbigbrother(int a , int b)
{
   int count = 0;
   while(a <= b)
   {
      a = (3*a);
      b = (2*b);
      count++;
   }
   return count;
}

int main()
{
   int w1 , w2;
   cin >> w1 >> w2;
   cout << bearandbigbrother(w1 , w2) << endl;
}
