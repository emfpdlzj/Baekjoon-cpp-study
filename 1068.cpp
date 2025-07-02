#include <bits/stdc++.h>
using namespace std;
int n, deletenode, leaf, root;
vector<int> adj[51];
bool visited[51];

void dfs(int from) {
    visited[from] = 1;
    if (from == deletenode) return;
    int cnt = 0;
    for (int there : adj[from]) {
        if (there == deletenode) continue;
        if (visited[there])
            continue;
        else {
            dfs(there);
            cnt++;
        }
    }
    if (cnt == 0) leaf++;
}
int main() {
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;  // 각 노드의 부모가 주어진다.
        cin >> t;
        if (t == -1)
            root = i;
        else
            adj[t].push_back(i);
    }
    cin >> deletenode;
    if (deletenode == root) {
        cout << 0;
    } else {
        dfs(root);
        cout << leaf;
    }
    return 0;
}

/*
@트리는 루트노드부터 탐색하는것이 거의 무조건 좋다. 
우선 노트에 주어진 문제대로 트리를 그려보았는데, 각 노드의 부모가 주어진다 
->여기서 우선 인접 리스트로 구현해봐야겠다고 생각함. 

정이진트리나 특별한 트리 형식이아님! 그러므로
리프노드를 구하는 별다른 공식이 없으므로, 
adj[].size()==0이면 리프노드라고 생각하기로 했음.

이 문제는 구현 후 고려해봐야할 사항이 두가지 있음.

1.무조건 0이 리프노드가 아니다.

2.deletenode를 제외하고 탐색 한다 

→ deletenode만 노드로 가지고있는 부모노드는, 리프노드이다. 
이 경우를 예외처리해줘야한다.
 */