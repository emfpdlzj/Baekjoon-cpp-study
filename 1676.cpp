#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int n5=0;
    for(int i=1;i<=n;i++){
        int l=i;
        while(l%5==0){
            l/=5; //l=l/5;
            n5++;
        }
    }
    cout <<n5;

    return 0;
}

/*
뒤에서부터 0은 결국 10의 개수이다. 
factorial 10 :3,628,800
-> 뒤에서 0이 두개임 -> 5가 두개 
factorial 15: 1,307,674,368,000
-> 뒤에서 0이 세개임 -> 5가 세개 

무조건 2보다는 5가 많음. 그럼 5의 개수만 세면됨. 
*/