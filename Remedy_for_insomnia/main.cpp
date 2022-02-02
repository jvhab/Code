#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> v1(d + 1);
    for (size_t i = 1; i <= d; ++i)
    {
        if (i % k == 0)
            v1[i] = 1;
        else if (i % l == 0)
            v1[i] = 1;
        else if (i % m == 0)
            v1[i] = 1;
        else if (i % n == 0)
            v1[i] = 1;
    }
    int sum_element = accumulate(v1.begin(), v1.end(), 0);
    cout << sum_element << "\n";
    return 0;
}
