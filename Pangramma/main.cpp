#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v1(26);
        char a;
        for (size_t i = 0; i < n; ++i)
        {
            cin >> a;
            if ((int)a < 97)
                v1[(int)a - 65] = 1;
            else
                v1[(int)a - 97] = 1;
        }
        int sums = accumulate(v1.begin(), v1.end(), 0);
        if (sums == 26)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;   
    return 0;
}
