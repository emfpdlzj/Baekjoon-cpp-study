/*
예시 코드를 보고 잘못 생각하지 말 것. 
prefix와 suffix..

*/
#include <bits/stdc++.h>
using namespace std;
int n;
string ss;
string h,t;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> ss;
    int pos=ss.find('*');
            h=ss.substr(0,pos);
            t=ss.substr(pos+1);

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if(h.size()+t.size()>str.size()){ //반례를 생각하자.  : ab는 ab*ab가 될 수 없다. 
            cout <<"NE\n";
        }else{
            if(h==str.substr(0,h.size())&&t==str.substr(str.size()-t.size())) cout <<"DA\n";
        else cout << "NE\n";
        }
    }
    return 0;
}