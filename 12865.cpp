#include <bits/stdc++.h>
using namespace std;
int n, k, res;
int ks(int cost[], int weight[], int n, int k) {  // knapsack
    int dp[101][100001];

    for (int w = 0; w <= k; w++) dp[0][w] = 0;
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= k; w++) {
            if (weight[i] > w)            // 무게가 가방 수용 무게보다 크면
                dp[i][w] = dp[i - 1][w];  // 담지 못하한다.
            else
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weight[i]] + cost[i]);
            // 담지 않은 경우 가치와, 담은 경우의 가치를 비교하여 큰 값
        }
    }

    return dp[n][k];  // n번째 물건까지고려했을 때, 무게<=k인 상황의 cost.
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    int cost[n + 1];
    int weight[n + 1];
    for (int i = 1; i <= n; i++) {
        int a, b;  // a:weight, b:cost
        cin >> a >> b;
        weight[i] = a;
        cost[i] = b;
    }
    cout << ks(cost, weight, n, k) << '\n';
    return 0;
}

/*
선택지가 물건을 넣는가? 안 넣는가 두가지로 나뉜다.
최대가치 dp[k][w] 최대 무게가 w인 가방을 K번 째 물건까지 담았을 때의 가치
k+1번째 물건을
a)넣지않는다 : dp[k+1][w]=dp[k][w]. k+1번째 물건의 무게가 전체무게보다 무거울 때
b)넣는다 :
자리 O : 그냥 넣는다
자리 X :
dp[k+1][w] = max(dp[k][w], k가치+dp[k-1][w-k무게])
*/