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
		int k;
		cin >> k;
		int a = 0;
		int b = 0;
		while (true)
		{
			b++;
			if (b % 3 == 0 || b % 10 == 3)
			{
				continue;
			}
			if (--k == 0)
			{
				cout << b << "\n";
				break;
			}
		}
	}
	return 0;
}