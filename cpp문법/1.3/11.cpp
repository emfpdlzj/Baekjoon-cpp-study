//cout << 출력할 것 << "\n" 하는게 일반적임.
#include <bits/stdc++.h>
using namespace std;
string a= "박민정 화이팅 ! ";
string b="졸업 하고 싶다 ... ~ ";
int main(){
    cout << a << '\n'; //더 빠르다.
    cout << a << "\n"; // 무슨 차이일까?
    cout <<a << " "<< ""<< b << '\n';
    return 0;
}