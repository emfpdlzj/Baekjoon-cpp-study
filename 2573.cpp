#include <bits/stdc++.h>
using namespace std;

int n, m;
int board[301][301];       // 빙산 
bool visited[301][301];  

int dy[] = {-1, 1, 0, 0};   
int dx[] = {0, 0, -1, 1};

// BFS로 탐색
void bfs(int y, int x) {
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = true;

    while (!q.empty()) {
        auto [cy, cx] = q.front(); q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int ny = cy + dy[dir];
            int nx = cx + dx[dir];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (visited[ny][nx]) continue;
            if (board[ny][nx] > 0) { // 빙산이면
                visited[ny][nx] = true;
                q.push({ny, nx});
            }
        }
    }
}

void melt() {
    int sea[301][301] = {0}; // 바다에 접한 면 개수 저장

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (board[y][x] == 0) continue; // 바다는 스킵

            int cnt = 0; // 바다 개수
            for (int dir = 0; dir < 4; dir++) {
                int ny = y + dy[dir];
                int nx = x + dx[dir];
                if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
                if (board[ny][nx] == 0) cnt++; // 주변이 바다라면
            }
            sea[y][x] = cnt; // 나중에 줄일 값 저장
        }
    }

    // board 값 줄이기
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            board[y][x] -= sea[y][x];
            if (board[y][x] < 0) board[y][x] = 0; // 음수 방지
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cin >> board[y][x]; // 빙산 높이 입력
        }
    }

    int year = 0; // 흐른 해

    while (1) {
        memset(visited, 0, sizeof(visited)); // 방문 배열 초기화
        int count = 0; // 빙산 덩어리 수

        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (board[y][x] > 0 && !visited[y][x]) {
                    bfs(y, x); // 한 덩어리 탐색
                    count++;
                }
            }
        }

        if (count == 0) { // 빙산이 모두 녹았을 때
            cout << 0 << '\n';
            return 0;
        }

        if (count >= 2) { // 두 개 이상 덩어리로 나뉜 경우
            cout << year << '\n';
            return 0;
        }

        melt(); // 빙산 높이 줄이기
        year++; // 1년 증가
    }

    return 0;
}
