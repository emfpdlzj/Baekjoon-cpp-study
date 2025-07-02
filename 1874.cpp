/*
n을 입력받는다.
1부터 n까지의 수를 준비한다. -> r
일단 push
top==v[i]면 pop한다.
top == n이고 v[i]!=n이면 break;
stk이 empty면 성공.
*/
#include <bits/stdc++.h>
using namespace std;
stack<int> st;
vector<int> v;
vector<char> c;
int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; k++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int r = 1;
    int i = 0;
    while (r <= n) {
        st.push(r);
        // cout << "r : " << r << '\n';
        r++;
        c.push_back('+');
        while (!st.empty() && st.top() == v[i]) {
            // cout << "st.top : " << st.top() << '\n';
            st.pop();
            c.push_back('-');
            i++;
        }
    }
    if (!st.empty()) {
        cout << "NO\n";
    } else
        for (char s : c) cout << s << '\n';

    return 0;
}