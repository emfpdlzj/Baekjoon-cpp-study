#include <bits/stdc++.h>
using namespace std;
int cmp(int a, int b){
    return a>b;
}
vector<int> v;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    while(v.size()!=0){
        cout << v.back()<<"\n";
        v.pop_back();
    }

    return 0;
}
