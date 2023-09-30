#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int g1 = abs(a-b);
    int g2 = abs(b-c);
    int g3 = abs(a-c);
    cout << max(g1 , max(g2,g3)) << endl;
}
