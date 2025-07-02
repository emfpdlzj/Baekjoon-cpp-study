#include <bits/stdc++.h>
using namespace std;

int n;
int cnt0[41];
int cnt1[41];
void init() {
    cnt0[0] = 1; cnt1[0] = 0;
    cnt0[1] = 0; cnt1[1] = 1;
    for (int i = 2; i <= 40; ++i) {
        cnt0[i] = cnt0[i-1] + cnt0[i-2];
        cnt1[i] = cnt1[i-1] + cnt1[i-2];
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        cout << cnt0[a] << " " << cnt1[a] << '\n';
    }
    return 0;
}