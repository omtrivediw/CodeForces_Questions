#include<bits/stdc++.h>
using namespace std;

bool translation(string s1 , string s2)
{
   int len1 = s1.length();
   int len2 = s2.length();
   if(len1 != len2) return false;
   int i = 0;
   int j = len1 - 1;
   while(i < len1 and j >= 0)
   {
      if(s1[i] != s2[j]) return false;
      i++;
      j--;
   }
   return true;
}

int main()
{
   string s1 , s2;
   cin >> s1;
   cin >> s2;
   if(translation(s1 , s2)) cout << "YES" << endl;
   else cout << "NO" << endl;
}
