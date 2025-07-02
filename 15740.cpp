#include <bits/stdc++.h>
using namespace std;

string getadd(string a, string b){ //a+b

}
string getminu(string a, string b){ //a-b

}

int main() {
    string a, b;
    cin >> a >> b;
    int isminu=0;
    if (a[0] == '-' && b[0] == '-') {  // 둘 다 음수
        isminu = 2;
    } else if (a[0] == '-' && b[0] != '-') {  // a만 음수
        isminu = 1;
    } else if (a[0] != '-' && b[0] == '-')
        isminu = 1;  // b만 음수

    if(isminu%2==0){
        getadd(a,b);
    }else{
        if(a[0]=='-') getminu(b,a);
        else if(b[0]=='-') getminu(a,b);

    }

    return 0;
}