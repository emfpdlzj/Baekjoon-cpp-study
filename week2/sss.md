 g++ -std=c++14 -Wall a.cpp -o test.out

 ./test.out

## 그래프 이론
- 정점 vertex, node : 그래프 형성 기본 단위 
- 간선 Edge
- Indegree, Outdegree
- 가중치 weight    
- Graph

### 트리 특징
1. 부모자식 게층구조
2. V-1=E
3. 임의의 두 노드 사이의 경로는 유일무이하게 존재한다.

- 루트노드: 가장 위에있는 노드
- 내부노드: 루트노드와 리프노드 사이의 노드
- 리프노드: 자식노드가 없는 노드

- 깊이: 루트노드에서 특정노드까지 최단거리
- 높이: 루트노드부터 리프노드 까지의 거리
- 레벨: 깊이와 비슷함.
- 서브트리: 트리 내의 하위 집합


##### 이진트리 (BST)
##### AVL
##### 레드블랙트리 

## 그래프 구현과 탐색
1. 인접 행렬: 정점과 간선의 관계를 나타내는 bool타입의 정사각형 행렬
```
bool a[V][V];
for(int i = 0;i < V; i++){
    for(int j = 0; j < V; j++){     
        if(a[i][j]){
            //출력하는 로직
            cout << i << "부터 " << j << "까지 경로가 있습니다.\n"; 
            // 해당 정점으로 부터 탐색하는 로직
        BFS(i);
        DFS(i);
        }
    }
}
```

```
#include<bits/stdc++.h>
using namespace std; const int V = 10;
bool a[V][V], visited[V]; 
void go(int from){
    visited[from] = 1;
    cout << from << '\n'; 
        for(int i = 0; i < V; i++){
            if(visited[i]) continue; 
            if(a[from][i]){
                go(i); 
            }
        }
        return; 
}
```

2.인접리스트
그래프에서 정점과 간선의 관계를 나타내는 연결리스트

list가 아닌 vector로 구현해도 된다. 그러나 보통 vector를 많이 사용한다.
인접리스트를 기반으로 로직을 구현할 때 많이 사용되는 연산은 마지막 요소에 삽입과 해당 배열의
n번째 요소를 탐색하는 연산이다. 그렇기 때문에 vector를 사용하는게 이득이다.
```
#include<bits/stdc++.h>
using namespace std; const int V = 10; vector<int> adj[V]; int visited[V];
void go(int idx){
    cout << idx << '\n'; 
    visited[idx] = 1;
    for(int there : adj[idx]){
        if(visited[there]) continue;
        go(there); 
    }
    return; 
}
int main(){ 
    adj[1].push_back(2);
     adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[3].push_back(4); 
    adj[4].push_back(3); 
    for(int i = 0; i < V; i++){
        if(adj[i].size() && visited[i] == 0) go(i); 
    }
}
```

#### 인접행렬과 인접리스트의 차이
- 공간복잡도
    - 인접행렬: O(V^2)
    - 인접리스트: O(V+E)
- 시간복잡도: 간선 한개 찾기
    - 인접행렬: O(1)
    - 인접리스트: O(V)
- 시간복잡도: 모든 간선 찾기
    - 인접행렬: O(V^2)
    - 인접리스트: O(V+E)
** 그래프가 희소할 때는 인접리스트, 조밀할 때는 인접 행렬 사용 **

