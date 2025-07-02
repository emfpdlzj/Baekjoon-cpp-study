#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n, k;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    cout << '<';
    while (v.size() != 0) {
        if (k - 1 < v.size()) {
            rotate(v.begin(), v.begin() + k - 1, v.end());
            cout << v[0];
            v.erase(v.begin());
            if (v.size() != 0) {
                cout << ", ";
            }
        } else
            k%=v.size();
    }
    cout << '>' << '\n';
    return 0;
}

/*
k만큼 회전하고 v.begin()을 삭제한다.
k>v.size()면 K-v.size()를 한다.
*/
