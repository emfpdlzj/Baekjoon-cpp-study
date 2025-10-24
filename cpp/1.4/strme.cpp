#include <bits/stdc++.h>
using namespace std;
int main(){
    string a="Love is";
    a +=" pain!";
    a.pop_back();
    //문자열의 끝을 지웁니다. 
    cout << a << " : " << a.size() << "\n";
    cout << char(* a.begin()) << '\n';
    cout << char(* (a.end() -1)) << "\n";;
    //string& insert (size_t pos, const sring*& str);
    a.insert(0, "test ");
    cout << a << " : " << a.size() << "\n";
    //size_t find (const string& str, size_t pos = 0);
    a.erase(0,5);
    cout << a << " : "<< a.size() << "\n";
    auto it =  a.find("Love");
    if(it !=string::npos){
        cout << "include. "<<'\n';
    }
    cout << it << "\n";
    cout << string::npos << "\n";
    //string substr  (size_t pos = 0, size_t Len = npos) const;
    cout << a.substr(5,2) << "\n";
    return 0;
}