#include <bits/stdc++.h>
using namespace std;
int main() {
    while (1) {
        string s;
        stack<char> tk;
        getline(cin, s);
        if (s == ".") {
            return 0;
        }
        for (char c : s) {
            if (c == '(' || c == '[') tk.push(c);
            if (c == ')') {
                if (!tk.empty() && tk.top() == '(') tk.pop();
                else tk.push(c);
            } 
            if (c == ']') {
                if (!tk.empty() && tk.top() == '[') tk.pop();
                else tk.push(c);
            } 
        }
        if (tk.empty()) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}