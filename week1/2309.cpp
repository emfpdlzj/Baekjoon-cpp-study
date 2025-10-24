/*
풀이 1. do while permutation 순열.
비정상 2명 난쟁이를 제외하고 출력하기
풀이 2. 재귀를 활용해서 풀기
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> b;
int flag=0;
void print(vector<int> b)
{
    for (int i : b)
        cout << i << "\n";
    flag=1;
}

int getsum(vector<int> &b)
{
    int sum = 0;
    for (auto it : b)
    {
        sum += it;
    }
    return sum;
}
//n이 많이 작아서 permutation으로 뽑아도 된다. 
void combi(int start, vector<int> &b)
{
    if (b.size() == 7 && getsum(b) == 100)
    {
        print(b);
        return;
    }
    for (int i = start + 1; i  < 9; i++)
    {
        b.push_back(v[i]);
        combi(i, b);
        if(flag==1){
            return ;
        }
        b.pop_back();
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for (int i = 0; i < 9; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    combi(-1, b);
    return 0;
}
