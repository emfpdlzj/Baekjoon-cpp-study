#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="123456";
    vector<int> digits;

    for(int i=0;i<s.length();i++){
        int digit=s[i] -'0';
        //s[i]는 문자 타입이므로 '0'을 빼서 정수값으로 변환함.
        digits.push_back(digit);
        //변환한 숫자를 벡터에 추가한다.
    }

    cout<<"문자열을 개별 숫자로 변환한 결과 : \n";
    for(int i=0;i<digits.size(); i++){
        cout << digits[i] << " ";
    }

    return 0;
}