#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> b;       // 현재 뽑은 수열을 저장하는 벡터
int used[9];         // 숫자 사용 여부를 체크하는 배열 (1~8까지 사용 가능)

// 수열 출력 함수
void print() {
    //sort(b.begin(), b.end());
    for (int k = 0; k < m; k++) {
        cout << b[k] << ' ';
    }
    cout << '\n';
}

void combi(int start, vector <int> &b){
    if(b.size()==m){ //재귀는 무조건 기저사례
        print();
        return ;
    }
    for(int i=start+1;i<=n;i++){
        b.push_back(i); //여기 i는 요소, 돌리고
        combi(i,b); //여기 i는 인덱스 
        b.pop_back(); //원복
    }
    return ;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;             // 1~n 중에서 m개를 뽑는 순열

    combi(0,b);

    return 0;
}


//1<=m,n<=8
//n과 m 1에서 오름차순 순열 조건+중복x 추가.. ->조합을 한다음에 정렬해서 출력 