#include <bits/stdc++.h>
using namespace std;
map<string, string> mp;

string rrtoi(string r)
{
    for (int i = 0; i < r.size(); i++)
    {
        if (r[i] >= 'a')
            r[i] = toupper(r[i]);
    }
    return r; // 아스키코드반환.
}
// map<key, value> ->key기준 오름차순 정렬, 출력은 value.
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        mp.clear();
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            string r;
            cin >> r;
            mp.insert({rrtoi(r), r});
        }

        cout << mp.begin()->second << "\n";
    }
    return 0;
}