#include <bits/stdc++.h>
using namespace std;

int n, m;
int city[50][50];
vector<pair<int, int>> houses;
vector<pair<int, int>> chickens;
int answer = INT_MAX;

int getCityChickenDistance(const vector<int>& selected) {
    int total = 0;

    for (auto& h : houses) {
        int minDist = INT_MAX;
        for (int idx : selected) {
            auto& c = chickens[idx];
            int dist = abs(h.first - c.first) + abs(h.second - c.second);
            minDist = min(minDist, dist);
        }
        total += minDist;
    }

    return total;
}

void solve(int idx, vector<int>& selected) { //chickens에서  m개를 선택하는 모든 경우를 조합
    if (selected.size() == m) {
        int d = getCityChickenDistance(selected);
        answer = min(answer, d);
        return;
    }

    for (int i = idx; i < chickens.size(); i++) {
        selected.push_back(i);
        solve(i + 1, selected);
        selected.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> city[i][j];
            if (city[i][j] == 1)
                houses.push_back({i, j});
            else if (city[i][j] == 2)
                chickens.push_back({i, j});
        }
    }

    vector<int> selected;
    solve(0, selected);

    cout << answer << '\n';
    return 0;
}

// 2=n<=50, 1<=m<=13
// 치킨 거리 = 노드 최단 거리
// dfs
// 이전 바이러스 문제와 비슷함
// 1.치킨집 m개 고르기 -> 조합
// 2.치킨 거리 계산하기
// 3.값비교