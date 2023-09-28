#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin >> s;
   int len = s.length();
   int upper = 0 , lower = 0;
   for(int i = 0 ; i < len ; i++)
   {
      if(s[i] >= 65 and s[i] <= 91)
      {
         upper++;
      }
      else if(s[i] >= 97 and s[i] <= 122)
      {
         lower++;
      }
   }
   if(upper > lower)
   {
      transform(s.begin(), s.end() , s.begin() , ::toupper);
      cout << s << endl;
   }
   else if(lower > upper)
   {
      transform(s.begin(), s.end() , s.begin() , ::tolower);
      cout << s << endl;
   }
   else{
      transform(s.begin(), s.end() , s.begin() , ::tolower);
      cout << s << endl;
   }
}
