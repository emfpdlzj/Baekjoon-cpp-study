// 무조건 두개를 합쳐서  m을 만들어야됨 .
#include <bits/stdc++.h>
using namespace std;
int n, m,cnt;
vector<int> v;
vector<int> b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    if(m>200000)cout << 0 <<'\n';
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==m){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}