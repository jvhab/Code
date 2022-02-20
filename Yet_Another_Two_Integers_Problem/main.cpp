#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int res = 0;
		int a, b;
		cin >> a >> b;
		if (a == b)
			cout << 0 << "\n";
		else if (abs(a - b) <= 10)
			cout << 1 << "\n";
		else if (abs(a - b) > 10)
		{
			if (abs(a - b) % 10 > 0)
			{
				res = (abs(a - b) / 10) + 1;
				cout << res << "\n";
			}
			else
			{
				cout << (abs(a - b) / 10) << "\n";
			}
		}
	}
	return 0;
}