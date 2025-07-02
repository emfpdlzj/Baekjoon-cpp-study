#include <bits/stdc++.h>
#include <cmath>
using namespace std;
bool cmp(int a, int b)
{
    return a < b;
}
// true가 뜨는 요소들의 순서로 정렬한다.
int main()
{
    int N, mode=0;
    double sum = 0;
    cin >> N;
    int arr[N];
    int cnt[8001]={};

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        sum += a;
    }
    sort(arr, arr+N, cmp);     // 정렬
    double mean=round(sum/N); //두 번째 자리에서 반올림. 
    if(mean==-0){ //-0이 출력되는 경우가 있음 . 수정
        mean=0;
    }
    cout << mean<< "\n"; // 산술평균
    int mid = (N / 2);
    cout << arr[mid] << "\n"; // 중앙값
    for(int i=0;i<N;i++){     //최빈값 구하기
       if(arr[i]>=0){
        cnt[int(arr[i])]++;
       }else{
        cnt[int(fabs(arr[i]))+4000]++; //음수는 절댓값음수 +4000 으로 인ㄷ게스 관리함. 
       }
    }
    mode=cnt[0]; //mode값 초기화 
    for(int i=0;i<8001;i++){
        if(mode<cnt[i]){
            mode=cnt[i]; //최빈값 구하기
        }
    }

    vector <double> m; //여러개의 최빈값을 모은 벡터 생성
    for(int i=0;i<8001;i++){ //최빈값이 여러개인 경우 관리하기 
        if(mode==cnt[i]){
            if(i<=4000){
                m.push_back(i);
            }else{
                m.push_back((i-4000)*(-1));  //음수 경우 원복값 구하기 
            }
        }
    }
    sort(m.begin(),m.end());
    if(m.size()==1){
        mode=m[0];
    }else{
        mode=m[1]; //최빈값이 여러개인 경우 두번째로 작은 값 출력 
    }

    cout << mode << "\n";
    cout << (arr[N - 1] - arr[0]) << "\n"; // 범위

    return 0;
}
