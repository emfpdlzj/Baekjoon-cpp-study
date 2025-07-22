//(a + b) % c = (a % c + b % c) % c
//(a * b) % c = (a % c * b % c) % c
// 모듈러 연산을 나중에 해도 된다.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int i = 1, j = 1;
        while (1) {
            if (i % n == 0) {
                cout << j << '\n';
                break;
            }
            i = (i * 10 + 1) % n;
            j++;
        }
    }
    return 0;
}