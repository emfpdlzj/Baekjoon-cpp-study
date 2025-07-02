#include <bits/stdc++.h>
using namespace std;
char adj[50][50];
int n, m, maxdist;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
int bfs(int yy, int xx) {
    int visited[50][50] = {};  // 함수 안에서 매번 초기화
    queue<pair<int, int>> q;
    visited[yy][xx] = 1;
    q.push({yy, xx});
    int maxStep = 0;

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (visited[ny][nx]) continue;
            if (adj[ny][nx] == 'W') continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});

            maxStep = max(maxStep, visited[ny][nx]);
        }
    }
    return maxStep - 1; // visited는 1부터 시작했으므로 -1
}

void solve() {
    maxdist = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (adj[i][j] == 'L') {
                maxdist = max(maxdist, bfs(i, j));
            }
        }
    }
    cout << maxdist;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> adj[i][j];
        }
    }
    solve();
    return 0;
}

// 보물 지도의 가로, 세로의 크기는 각각 50이하이다.
// 가중치가 같은 그래프 내 최단거리 : BFS
// 가장 먼 두 노드 사이의 최단거리를 출력하면 됨.