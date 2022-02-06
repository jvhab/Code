#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int res = 0;
    vector<pair<int, int>> v1(n);
    for (auto& s : v1)
        cin >> s.first >> s.second;
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = i + 1; j < n; ++j)
        {
            if (v1[i].first == v1[j].second)
            {
                res++;
            }
            if (v1[i].second == v1[j].first)
            {
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
