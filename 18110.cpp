#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, sum = 0;
    cin >> n;
    if (n == 0) {
        cout << "0\n";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    //cout << "sum  : " << sum << '\n';
    double l = round(0.15 * n);
    sort(v.begin(), v.end());
    for(int i=l;i<n-l;i++){
        sum+=v[i];
    }
    n=n-2*l;
    double res = round((double)sum / n);
    cout << res << '\n';
    return 0;
}
