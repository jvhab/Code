#include <string>
#include <vector>
#include <iostream>
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
		int sums = 0;
		int n;
		cin >> n;
		int a;
		int cnt1 = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			if (a == 1)
				cnt1++;
			sums += a;
		}
		if (sums % 2 == 0 && cnt1 / 2 >= 1)
		{
			cout << "YES" << "\n";
		}
		else if (sums % 2 == 0 && n % 2 == 0)
		{
			cout << "YES" << "\n";
		}
		else
			cout << "NO" << "\n";
	}
	return 0;
}