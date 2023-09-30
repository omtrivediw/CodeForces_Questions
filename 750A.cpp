#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin >> n >> k;
   int thave = 240 - k;
   int ttaken =  0;
   int ans =0;
   for(int i = 1 ; i <= n ; i++)
   {
    ttaken += (5*i);
    if(ttaken <= thave ){
    
    ans++;
    }
   }
   cout << ans << endl;
}
