#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "정렬 x기반";
    int a[] = {1,3,2};
    do{
        for(int i:a)cout << i <<" ";
        cout <<'\n';
    }while(next_permutation(a,a+3));
    cout << "정렬기반";
    int b[]={1,2,3};
    do{
        for(int i:a)cout << i << " ";
        cout << '\n';
    }while(next_permutation(b,b+3));
    return 0;
}

/*
a,a+3
&a[0],&a[3]
&a[0],&a[0]+3

*/