#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; // min 방지용 
int n;
int w[16][16];
int dp[16][1 << 16];

int tsp(int current, int visited) {
    if (visited == (1 << n) - 1) {
        // 모든 도시를 다 방문했을 때 → 시작점(0번)으로 돌아갈 수 있는지 확인
        if (w[current][0] != 0) return w[current][0];
        else return INF;
    }

    // 이미 계산된 경우 그대로 리턴
    if (dp[current][visited] != -1) return dp[current][visited];

    dp[current][visited] = INF;
    for (int next = 0; next < n; next++) {
        if ((visited & (1 << next)) == 0 && w[current][next] != 0) {
            dp[current][visited] = min(dp[current][visited],
                tsp(next, visited | (1 << next)) + w[current][next]);
        }
    }

    return dp[current][visited];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> w[i][j];

    memset(dp, -1, sizeof(dp)); // DP 배열 초기화
    cout << tsp(0, 1 << 0) << '\n'; // 0번 도시에서 출발, 0번만 방문한 상태
    return 0;
}


/*
2<n<16 -> 시간제한 고려 x
비용 행렬 ->트리 ? linked list? 생각 -> 대충 dfs?겠구나 함.
TSP -> 완탐 or dp ==> n이 16이긴하나 dp.. 
왜 dp?: 중복되는 경로가 생김.
visited 배열을 생각했으나, 시간초과-> 비트마스킹
출발 도시를 어디로 할지도 고려해야함. ->임의설정 
*/