#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int age;
    string name;
    int order;
} member;

bool cmp(const member &a, const member &b)
{
    if (a.age != b.age)
    {
        return a.age < b.age;
    }
    return a.order < b.order;
}
vector<member> members;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        string b = "";
        cin >> a >> b;
        members.push_back(member{a, b, i});
    }

    sort(members.begin(), members.end(), cmp);
    for (auto p : members)
    {
        cout << p.age << " " << p.name << "\n";
    }
    return 0;
}