/* 첫째줄 1< n,m <100,000
둘째줄 ~n : 포켓몬 이름. 첫글자 대문자이외 소문자(가끔 마지막 글자가 소문자) 길이 2~20
m개의 줄 : 알파벳(아스키 119) or 숫자 ->포켓몬 넘버 or 이름
*/
#include <bits/stdc++.h>
using namespace std;
map <string, int> ms;
map <int, string> mi;
int n, m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int idx = 1;
    while (n--) {
        string tmp;
        cin >> tmp;
        ms.insert({tmp, idx});
        mi.insert({idx++, tmp});
    }
    while(m--){
        string r;
        cin >> r;
        if('A'<=r[0]){//문자
            auto it = ms.find(r);
            cout <<(*it).second << '\n';
        }else{//숫자
            auto it = mi.find(stoi(r));
            cout <<(*it).second << '\n';
        }
    }
    return 0;
}