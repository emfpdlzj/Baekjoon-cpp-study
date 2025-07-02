#include <bits/stdc++.h>
#include <cmath>
using namespace std;
//에라토스테네스의 체는 특정 범위에서 소수인 수들을 판별해내는데
//효율적으로 동작하지만 특정 수가 소수인지 판별하기 위해서 사용하기 위해서는 비효율적이다.
//소수란 1보다 크며 1 이외의 자신으로만 나누어지는 수
//2부터 sqrt(n) 까지의 루프만을 반복하여도 임의의 수 n이 소수인지 아닌지 판별이 가능
int isprime(int a){ //소수면 0, 아니면 1 반환.
    if(a==1)
        return 1;
    int num=(int)sqrt(a);
    for(int i=2;i<num;i++){
        if(a%i==0){
            return 1;
        }
    }
    return 0;

}
int main(){
    int a,b;
    cin >> a >> b;
    int flag=0;
    flag+=isprime(a);
    b=a+b*1000000;
    flag+=isprime(b);
    if(flag==0){
        cout << "Yes"<<"\n";
    }else{
        cout << "No"<<"\n";
    }

    return 0;
}