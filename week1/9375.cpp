//의상 이름이 필요없다느 생각을 해야한다. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, int> mp;

        while (n--) {
            string name, type;
            cin >> name >> type;
            mp[type]++;
        }

        int ans = 1;
        for (auto& it : mp) {
            ans *= (it.second + 1);  // 입지 않는 경우 포함
        }

        cout << ans - 1 << '\n';  // 전부 안 입는 경우 제외
    }

    return 0;
}
