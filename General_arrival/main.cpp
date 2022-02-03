#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int res = 0;
    int min_i = 0;
    int max_i = 0;
    int min_res = 1000;
    int max_res = 0;
    vector<int> v1(n);
    for (size_t i = 0; i < n; ++i)
    {
        cin >> v1[i];
        if (min_res >= v1[i])
        {
            min_res = v1[i];
            min_i = i;
        }
        if (max_res < v1[i])
        {
            max_i = i;
            max_res = v1[i];
        }
    }
    res = max_i;
    if (max_i > min_i)
        res--;
    res += n - min_i - 1;
    cout << res << "\n";
    return 0;
}
