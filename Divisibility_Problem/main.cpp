#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << 0 << "\n";
    }
    else if (a <= b)
    {
        cout << b - a << "\n";
    }
    else if (a % b > 0)
    {
        cout << b * (a/b + 1) - a << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
