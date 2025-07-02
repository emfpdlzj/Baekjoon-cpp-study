#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[101]; 
int visited[101];     

// start번 사람 기준으로 모든 사람까지의 거리 합 구하는 함수
int BFS(int start) {
    fill(visited, visited + 101, 0); // visited 배열 0으로 초기화 (거리도 초기화됨)

    queue<int> q;
    visited[start] = 1; 
    q.push(start);   

    while (!q.empty()) {
        int here = q.front(); q.pop(); // 현재 위치 꺼냄
        for (int there : adj[here]) {  
            if (visited[there]) continue; 
            visited[there] = visited[here] + 1; // 거리 갱신 (전 노드 + 1)
            // 기존 visited와 조금 다르게 사용 
            q.push(there); 
        }
    }

    // visited 배열의 값들을 모두 더함 
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += visited[i] - 1; // 시작점을 1로 했으니 -1 해줘야 실제 거리
    }
    return sum; // 해당 사람의 케빈 베이컨 수 합 반환
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m; 

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b); 
        adj[b].push_back(a);
    }

    int result = 0;        // 가장 케빈 베이컨 수가 작은 사람 번호 저장
    int minValue = 1e9;    // 최소 케빈 베이컨 수 합 저장용 

    // 1번부터 n번 사람까지 전부 BFS 
    for (int i = 1; i <= n; i++) {
        int totalDistance = BFS(i); // i번 사람의 케빈 베이컨 수 합
        if (totalDistance < minValue) { // 지금까지 중에 제일 작으면 갱신
            minValue = totalDistance;
            result = i;
        }
    }

    cout << result << '\n'; // 케빈 베이컨 수 가장 작은 사람 번호 출력
    return 0;
}

//모든 정점을 방문해보기까지, 몇 번 visited 했는가?
