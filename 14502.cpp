#include <bits/stdc++.h>
using namespace std;

int adj[9][9];
bool visited[9][9];
vector<pair<int, int> > zeroList;  // 벽을 세울 수 있는 공간, 조합에 사용.
vector<pair<int, int> > virusList;
int n, m,ret;
const int dy[] = {-1, 0, 1, 0}; 
const int dx[] = {0, 1, 0, -1}; 

void dfs(int y, int x){
    for(int i=0;i<4;i++){
    int ny=y+dy[i];
     int nx=x+dx[i];
    if(ny<0||ny>=n||nx<0 ||nx>=m|| visited[ny][nx]||adj[ny][nx]==1)continue;
        visited[ny][nx]=1;
        dfs(ny,nx);
    }
    return;
}

int solve(){
    fill(&visited[0][0], &visited[0][0]+10*10, 0); //visited 초기화
    for(pair<int, int> b: virusList){
        visited[b.first][b.second]=1;
        dfs(b.first,b.second);
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adj[i][j]==0 && !visited[i][j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> adj[i][j];
            if (adj[i][j] == 0) zeroList.push_back({i, j});
            if (adj[i][j] == 2) virusList.push_back({i, j});
        }
    }
    // 3개를 뽑아야 하므로 별도 함수 말고 for문으로 구현  가능.
    for (int i = 0; i < zeroList.size(); i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                adj[zeroList[i].first][zeroList[i].second]=1; //벽쌓기
                adj[zeroList[j].first][zeroList[j].second]=1;
                adj[zeroList[k].first][zeroList[k].second]=1;
                ret=max(ret,solve());
                adj[zeroList[i].first][zeroList[i].second]=0;
                adj[zeroList[j].first][zeroList[j].second]=0;
                adj[zeroList[k].first][zeroList[k].second]=0; //원복
            }
        }
    }
    return 0;
}

/*
1.벽을 세운다
2.바이러스가 퍼진다
3.안전 영역의 개수를 센다.

문제의 최대범위가 3<=n,m<=8, 맵의 최대크기는 64칸
대략 64C3*(64+64)의 시간복잡도를 가질것이다.
60*20*30*120= 400만 정도 이므로 2초안에 풀 수 있다.

벽을 효율적이기보단 일단 무식하게 세워보는 경우의수를 생각.
모든 경우의수로 벽을 세우고, 바이러스를 퍼뜨리고, 안전영역의 개수를 센다.

*/