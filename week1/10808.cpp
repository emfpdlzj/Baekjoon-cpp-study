/*
평행이동으로 표현

*/
#include <bits/stdc++.h>
using namespace std;

int arr[26]={0,};
int main(){
    string r;
    cin >> r;
    for(int i=0;i<r.size();i++){
        int j=(int)(r[i])-97;
        arr[j]++;
        //arr[i-'a']++ 더 나은 코드 
    }
    for(int a: arr){
        cout << a << " ";
    }
    cout <<"\n";
    return 0;
}