#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, a;
    cin >> n;
    while (n--) {
        cin >> a;
        mp.insert({a, a});
    }
    cin >> m;
    while (m--) {
        cin >> a;
        auto it = mp.find(a);
        if (it == mp.end()) {
            cout << "0\n";
        }else{
            cout <<"1\n";
        }
    }
}