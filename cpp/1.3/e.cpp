//여러개의 getline을 받을 때 bufferflush를 해주어야 함.
#include <bits/stdc++.h>
using namespace std;
int T;
string s;
int main(){
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);
    for(int i=0;i<T;i++){
        getline(cin, s);
        cout << s << '\n';
    }
    return 0;
}
