#include <bits/stdc++.h>
using namespace std;
int m, d;
int main()
{
    cin >> m >> d;

    if (m > 2)
    {
        cout << "After";
    }
    else if (m == 2)
    {
        if (d < 18)
        {
            cout << "Before";
        }
        else if (d > 18)
        {
            cout << "After";
        }
        else
        {
            cout << "Special";
        }
    }else{
        cout << "Before";
    }

}