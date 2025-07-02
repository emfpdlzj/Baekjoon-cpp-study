#include <bits/stdc++.h>
using namespace std;
int n,m;
int adj[1001][1001];
int visited[1000][1000];

void solve(){

}
int main(){
    cin>>n;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a][b]=c;
    }
    solve();
    return 0;
}

//1<=n<=1000, 1<=m<=100000
//프림 알고리즘 ->1000000 2초 