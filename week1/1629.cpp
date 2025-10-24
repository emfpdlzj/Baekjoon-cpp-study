/* 4%2==0 일 때, 4를 2의 배수라고 한다. 
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b) {
    if (b == 1) return a % c; //기저사례 
    ll ret = go(a, b / 2); //ret이라는 변수에 담아두고 
    ret = (ret * ret) % c; //나머지 연산을 하는 것임. 
    if (b % 2) ret = (ret * a) % c; 
    //만약 b가 홀수라면 ? >한 번 더 곱해준다. 
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c;
    cout << go(a,b)<<'\n';
    return 0;
}