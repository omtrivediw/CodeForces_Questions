#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int acount = 0 , dcount = 0;
   for(int i = 0 ; i < n ; i++)
   {
      if(s[i] == 'A') acount++;
      else dcount++;
   }
   if(acount > dcount) cout << "Anton" << endl;
   else if(acount < dcount) cout << "Danik" << endl;
   else cout << "Friendship" << endl;
}
