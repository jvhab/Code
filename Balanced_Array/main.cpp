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
		int n;
		cin >> n;
		int a = 0;
		int b = 1;
		if (n % 4 != 0)
			cout << "NO" << "\n";
		else
		{
			cout << "YES" << "\n";
			for (int i = 1; i < n; ++i)
			{
				if (i <= n / 2)
				{
					a += 2;
					cout << a << " ";
				}
				else
				{
					cout << b << " ";
					b += 2;
				}
			}
			cout << b + n / 2 << "\n";
		}
	}
	return 0;
}