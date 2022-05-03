#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int w, h, n;
		int res = 1;
		cin >> w >> h >> n;
		while (w >= 2 || h >= 2)
		{
			if (w % 2 == 0)
			{
				w = w / 2;
				res *= 2;
			}
			if (h % 2 == 0)
			{
				h = h / 2;
				res *= 2;
			}
			if (h % 2 != 0 && w % 2 != 0)
				break;
		}
		if (res >= n)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}