#include <bits/stdc++.h>
using namespace std;

int v;
vector<pair<int, int>> adj[100001];
int visited[100001];
int maxDist = 0;
int farNode = 0;

// DFS를 통해 가장 먼 노드와 거리 갱신
void dfs(int node, int dist) {
    visited[node] = 1;

    if (dist > maxDist) {
        maxDist = dist;
        farNode = node;
    }

    for (auto [next, cost] : adj[node]) {
        if (!visited[next]) {
            dfs(next, dist + cost);
        }
    }
}

int main() {
    cin >> v;

    for (int i = 0; i < v; i++) {
        int from;
        cin >> from;
        while (true) {
            int to, weight;
            cin >> to;
            if (to == -1) break;
            cin >> weight;
            adj[from].push_back({to, weight});
        }
    }

    // 1. 임의의 노드(1번)에서 가장 먼 노드 찾기
    fill(visited, visited + v + 1, 0);
    dfs(1, 0);

    // 2. 그 노드에서 다시 DFS해서 트리의 지름 구하기
    maxDist = 0;
    fill(visited, visited + v + 1, 0);
    dfs(farNode, 0);

    cout << maxDist << '\n';

    return 0;
}


/*
인접리스트이고, 그패프가 희소한 편인 것 같아서 인접 리스트로 사용하기로함.
완탐의 경우이므로 dfs로 구현 ->결과가 이상하게 나옴
완탐이라 생각했는데 노드는 최대 100000개고 엣지는 더 많아질 수 있어서 시간초과뜸
트리에서 임의의 두 점 사이의 거리 중 가장 긴 것. 가장 끝 두 점을 구해야한다.
dfs로 가장 끝 점을 구한 후, 그점에서 다시 Dfs를 진행해서 반대 끝 점을 찾는다.
완탐 dfs보다 시간도 절약됨.
*/
