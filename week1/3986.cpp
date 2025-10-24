#include <bits/stdc++.h>
using namespace std;
int a, cnt;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;
    for (int k = 0; k < a; k++) {
        stack<char> s;
        string t;
        cin >> t;
        for (char i : t) {
            if (s.size()&&s.top() == i)
                s.pop();
            else {
                s.push(i);
            }
        }
        if(s.size()!=0){
            cnt++;
        }
    }
    cout << a - cnt;
    return 0;
}