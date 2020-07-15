#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
string str1, str2;
vector<string> set1, set2;

int main()
{
    int inter = 0, sum = 0, ans = 65536;

    getline(cin, str1);
    getline(cin, str2);

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 65 && str1[i] < 97)
            str1[i] += 32;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] >= 65 && str2[i] < 97)
            str2[i] += 32;
    }

    for (int i = 0; i < str1.size() - 1; i++)
    {
        if (str1[i] >= 97 && str1[i] <= 122 && str1[i + 1] >= 97 && str1[i + 1] <= 122)
        {
            set1.push_back(str1.substr(i, 2));
        }
    }
    for (int i = 0; i < str2.size() - 1; i++)
    {
        if (str2[i] >= 97 && str2[i] <= 122 && str2[i + 1] >= 97 && str2[i + 1] <= 122)
        {
            set2.push_back(str2.substr(i, 2));
        }
    }

    if (set1.size() == 0 && set2.size() == 0)
    {
        cout << ans;
        return 0;
    }

    while (set1.size() != 0)
    {
        string temp = set1[0];
        int cnt1 = 0, cnt2 = 0;

        for (vector<string>::iterator iter = set1.begin(); iter != set1.end();)
        {
            // set1의 모든 원소를 돌면서 해당 원소가 각 집합에 몇 개 있는지 구함
            if ((*iter).compare(temp) == 0)
            {
                cnt1++;
                iter = set1.erase(iter);
            }
            else
            {
                iter++;
            }
        }

        //두 번째 집합안에 중복 원소 개수 찾기
        for (vector<string>::iterator iter = set2.begin(); iter != set2.end();)
        {
            // set2의 모든 원소를 돌면서 해당 원소가 각 집합에 몇 개 있는지 구함
            if ((*iter).compare(temp) == 0)
            {
                cnt2++;
                iter = set2.erase(iter);
            }
            else
            {
                iter++;
            }
        }

        //중복 원소 개수가 큰 값을 합집합에 더하고 작은 값을 교집합에 더함
        if (cnt1 < cnt2)
        {
            inter += cnt1;
            sum += cnt2;
        }
        else
        {
            inter += cnt2;
            sum += cnt1;
        }
    }

    while (set2.size() != 0)
    {
        sum += set2.size();
        set2.clear();
    }

    cout << (inter * 65536) / sum;
    return 0;
}