#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int m;
    int b = 0;
    cin >> m;
    while (m)
    {
        string input;
        int a = 0;
        cin >> input;
        if (input == "add")
        {
            cin >> a;
            b |= (1 << a);
        }
        else if (input == "remove")
        {
             cin >> a;
             b &= ~(1 << a);
        }
        else if (input == "check")
        {
            cin >> a;
            if (b & (1 << a))
            {
                cout << "1" << "\n";
            }
            else
                cout << "0" << "\n";
        }
        else if (input == "toggle")
        {
            cin >> a;
                        b ^= (1 << a);
        }
        else if (input == "all")
        {
            b=(1<<21)-1;
        }
        else if (input == "empty")
            b=0;
            m--;
    }
    return 0;
}