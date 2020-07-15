#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
int maxStd, clickedCnt;
map<int, int> A;
map<int, int>::iterator it;
vector<pair<int, int>> B;

int main()
{
    cin >> maxStd >> clickedCnt;
    for (int i = 0; i < clickedCnt; i++)
    {
        // 학번을 key로 들어온 순서를 value로 저장 (다수 클릭 시 맨 마지막 순서가 최종 순서) A[학번]=들어온순서
        int s;
        cin >> s;
        A[s] = i;
    }

    for (it = A.begin(); it != A.end(); it++)
    {
        // 들어온 순서대로 정렬하기 위해 vector에 저장
        B.push_back(make_pair(it->second, it->first));
    }

    sort(B.begin(), B.end());

    // 정원보다 신청 인원이 작을 경우 대비
    int num = min(maxStd, int(B.size()));

    for (int i = 0; i < num; i++)
    {
        cout << B[i].second << endl;
    }
    return 0;
}
