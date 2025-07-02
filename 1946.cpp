#include <bits/stdc++.h>
using namespace std;
int t, n, cnt, minf, mins;
vector<pair<int, int>> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        v.clear();
        cnt = 1; //첫 번재 사람은 무조건 합격임1
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end());
        mins = v[0].second;
        for (int i = 1; i < n; i++) {
            if (v[i].second < mins) {
                mins = v[i].second;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}

// 1<=t<=20, 1<=n<=1
// 1.vector
// 2.map
// 3.binary search
