#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int n, x;
vector<int> arr1, arr2;
vector<string> ret;
vector<string> solution(int n, vector<int> a, vector<int> b)
{
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        string answer = "";
        int tmp = a[i] | b[i];
        for (int j = 0; j < n; j++)
        {
            if (tmp % 2 == 0)
                answer += " ";
            else
                answer += "#";
            tmp = tmp >> 1;
        }
        reverse(answer.begin(), answer.end());
        res.push_back(answer);
    }
    return res;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr2.push_back(x);
    }

    ret = solution(n, arr1, arr2);
    for (int i = 0; i < n; i++)
    {
        cout << ret[i] << endl;
    }
    return 0;
}
