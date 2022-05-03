#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int res = 0;
	int time = 240 - k;
	for (int i = 1; i <= n; ++i)
	{
		if ((time - i * 5) >= 0)
		{
			res++;
			time -= 5 * i;
		}
	}
	cout << res << "\n";
	return 0;
}