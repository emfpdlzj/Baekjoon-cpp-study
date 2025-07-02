    #include <bits/stdc++.h>
    using namespace std;
    int n, res;
    int hp[3]={0,0,0};
    int dp[61][61][61];
    int solve(int x, int y, int z) {
        if (x < 0) return solve(0, y, z);
        if (y < 0) return solve(x, 0, z);
        if (z < 0) return solve(x, y, 0);

        // 전부 파괴된 경우 return 0
        if (x == 0 && y == 0 && z == 0) return 0;

        int& res = dp[x][y][z];

        // 이미 알고있는 dp값이면 그걸 반환
        if (res != -1) return res;

        res = 1e9;

        // 나올수있는 모든 경우 6가지
        res = min(res, solve(x - 9, y - 3, z - 1) + 1);
        res = min(res, solve(x - 9, y - 1, z - 3) + 1);
        res = min(res, solve(x - 3, y - 9, z - 1) + 1);
        res = min(res, solve(x - 1, y - 9, z - 3) + 1);
        res = min(res, solve(x - 3, y - 1, z - 9) + 1);
        res = min(res, solve(x - 1, y - 3, z - 9) + 1);

        return res;
    }

    int main() {
        cin.tie(0);
        cout.tie(0);
        memset(dp, -1, sizeof(dp));
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> hp[i];
        }
        cout << solve(hp[0], hp[1], hp[2]);
        return 0;
    }
    // 체력 <=60
    // 때릴 수 있는 경우의 수도 6가지밖에없음..
