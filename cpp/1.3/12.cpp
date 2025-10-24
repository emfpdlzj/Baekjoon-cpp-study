//cout << ( 변수 ) 전에 fixed<< setprecision(자릿수)
//원하는 자릿수만 출력
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double a=1.23456789;
int main(){
    cout << a <<'\n'; //1.234567
    cout << fixed << setprecision(3) << a << '\n'; //1.235
    cout << fixed << setprecision(8) << a << '\n'; 
    //1.23456789
    return 0;
}

//cmd +l:라인 전체 선택 명령어.
//cmd + j: 터미널 여닫는 명령어.