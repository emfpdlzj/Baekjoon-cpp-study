#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while (n--) {
        string s;
        stack<char> stk;
        cin >> s;
        for (char c : s) {
            if (c == '(') {
                stk.push(c);
            } else {
                if (!stk.empty() && stk.top() == '(') {
                    stk.pop();
                } else {
                    stk.push(c);
                }
            }
        }
        if(stk.empty()){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}