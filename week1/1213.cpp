// 길이가 최대 50글자
// 홀수 체크 방법 -> 이진수로 마지막 글자가 무조건 1이다. a&1
#include <bits/stdc++.h>
using namespace std;
string s,ret;
char mid;
int cnt[200], flag;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for(char a:s)cnt[a]++;
    
    for (int i ='Z';i>='A';i--){
        if(cnt[i]){
            if(cnt[i]&1){
                mid=char(i);flag++; //홀수가 한개가 들어오는 경우 중앙값으로 사용 
                cnt[i]--;
            }
            if( flag==2)break;
            for(int j=0;j<cnt[i];j+=2){
                ret=char(i)+ret; //앞에다 붙이기
                ret+=char(i); //뒤에다 붙이기
            }
        }
    }
    if(mid)ret.insert(ret.begin()+ret.size()/2, mid);
    if(flag==2)cout <<"I'm Sorry Hansoo\n";
    else cout << ret <<"\n";

    return 0;
}