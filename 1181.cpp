// 입력 받음. sort-> length순으로 하되 length같으면 알파벳순
#include <bits/stdc++.h>
using namespace std;
vector<string> str;

int cmp(string a, string b)
{
    if (a.length() < b.length())
    {
        return 0;
    }
    else if (a.length() > b.length())
    {
        return 1;
    }
    else
    { // 길이 같으면 사전식 정렬
        return a > b;
    }
}
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        str.push_back(temp);
    }

    sort(str.begin(), str.end(), cmp);
    str.erase(unique(str.begin(),str.end()),str.end());

    while(str.size()!=0)
    {
        cout << str.back() << "\n";
        str.pop_back();
    }
    return 0;
}