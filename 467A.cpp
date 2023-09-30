#include<bits/stdc++.h> 
using namespace std;

bool georgeandaccommodation(int p , int q)
{
    // int count = 0;
    if(abs(p-q) >= 2) 
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n--)
    {
        int p,q;
        cin >> p >> q;
        if(georgeandaccommodation(p,q)) count++;
    }
    cout << count << endl;
}
