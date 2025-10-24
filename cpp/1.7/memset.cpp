#include <bits/stdc++.h>
using namespace std;
const int max_n=1004;
int a[max_n];
int a2[max_n][max_n];
int main(){
    memset(a, -1, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for(int i=0;i<10; i++)cout <<a[i] << " ";
    cout <<"\n";
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout << a2[i][j] << " ";
        }
        cout <<"\n";
    }

    return 0;
}

//memset(배열의이름, k, 배열의크기 ): 0,-1,char형의 하나의 문자로 초기화 가능함.
