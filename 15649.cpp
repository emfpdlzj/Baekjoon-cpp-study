#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;       // 현재 뽑은 수열을 저장하는 벡터
int used[9];         // 숫자 사용 여부를 체크하는 배열 (1~8까지 사용 가능)

// 수열 출력 함수
void print() {
    for (int k = 0; k < m; k++) {
        cout << v[k] << ' ';
    }
    cout << '\n';
}

// 백트래킹 함수: r은 현재 깊이(=지금까지 고른 개수)
void bbb(int r) {
    if (r == m) {  // m개를 모두 골랐다면 출력
        print();
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (used[i] == 0) {     // 아직 사용하지 않은 수라면
            v[r] = i;           // r번째 자리에 i를 넣고
            used[i] = 1;        // i를 사용 처리
            bbb(r + 1);         // 다음 자리로 이동
            used[i] = 0;        // 백트래킹: i 다시 미사용 처리
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;             // 1~n 중에서 m개를 뽑는 순열

    v.resize(m);               // 수열의 길이는 m으로 고정
    bbb(0);                    // 깊이 0부터 백트래킹 시작

    return 0;
}

//처음에 makePermutation을 사용했는데, 오름차순 출력이 좀 어려웠음. 
//백트래킹 하면서 used를 이용해 중복 방지
//오름차 순으로 탐색 -> 오름차순으로 출력되게 함
//n이랑 m이 최대 8이므로 시간복잡도는 고려안함.