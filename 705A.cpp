#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s = "I hate";
  if(n == 1) cout << "I hate it" << endl;
  else{
    for(int i = 2 ; i <= n ; i++)
    {
        if(i % 2 == 0)
        {
            s += " that I love";
        }
        else{
            s += " that I hate";
        }
    }
    s += " it";
    cout << s << endl;
  }
  
}
