#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    int x = 0;
    for(int i = 0 ; i < t ; i++)
    {
        cin >> s;
        if(s == "++X")
        {
            x++;
        }
        else if(s == "--X")
        {
            x--;
            }
            else if(s == "X++")
            {
                x++;
                }
                else if(s == "X--")
                {
                    x--;
                    }
                    }
    cout << x;    

    }
 
