#include<iostream>
using namespace std;

int main()
{
   string s;
   cin >> s;
   int len = s.length();
   int count = 0;
   int arr[27] = {0};
   for(int i = 0; i < len; i++)
   {
      if(arr[int(s[i]) - 97] == 0)
      arr[int(s[i]) - 97] += 1;
   }
   for(int i = 0; i <= 27; i++)
   {
      count += arr[i];
   }
   if(count % 2 == 0) cout << "CHAT WITH HER!" << endl;
   else cout << "IGNORE HIM!" << endl;
}
