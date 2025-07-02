#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0}; // 상우하좌
int dx[4] = {0, 1, 0, -1};
int n, m, k;
int arr[101][101];
bool visited[101][101];
vector<int> area;

int DFS(int y, int x) {
    visited[y][x] = true;
    int size = 1; // 현재 칸 포함
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
        if (arr[ny][nx] == 0 && !visited[ny][nx]) {
            size += DFS(ny, nx); // 넓이 누적
        }
    }
    return size;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;

    // 직사각형 채우기 (x: 0~m, y: 0~n)
    while (k--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int y = y1; y < y2; y++) {
            for (int x = x1; x < x2; x++) {
                arr[y][x] = 1;
            }
        }
    }

    int ret = 0;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (arr[y][x] == 0 && !visited[y][x]) {
                ret++;
                area.push_back(DFS(y, x));
            }
        }
    }

    sort(area.begin(), area.end());
    cout << ret << '\n';
    for (int a : area) cout << a << ' ';
    cout << '\n';
    return 0;
}
/*
모눈종이의 왼쪽 아래 꼭짓점의 좌표는 (0,0)이고, 오른쪽 위 꼭짓점의 좌표는(N,M)이다.
n,m,k<=100
입력되는 K개의 직사각형들이 모눈종이 전체를 채우는 경우는 없다.
배열 생성 -> 직사각형 좌표 받아서 ++ 함.
0인 곳만 DFS 탐색
*/