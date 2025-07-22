#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    for(int i=1;i<10;i++)v.push_back(i);
    for(int a:v)cout << a << " ";
    cout << "\n";
    v.pop_back(); //끝에서 하나를 출력 

    for(int a:v) cout << a << " ";
    cout <<"\n";

    v.erase(v.begin(), v.begin()+3); //앞에서 3개 삭제

    for(int a:v) cout << a << " ";
    cout << "\n";

    auto a=find(v.begin(), v.end(), 100); //처음부터 끝까지 100 찾기
    if(a==v.end())cout << "not found"<< "\n";

    fill(v.begin(), v.end(), 10); // 10으로 채우기 
    for(int a:v)cout << a << " ";
    cout << "\n";
    v.clear();
    cout << "is nothing? \n";
    for(int a:v) cout << a << " ";
    cout << "\n";
    return 0;
}