#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<string> v1(n);
	for (size_t i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			v1[i] = string(m, '#');
		}
		else
		{
			v1[i] = string(m, '.');
			if ((i + 1) % 4 != 0)
				v1[i][m - 1] = '#';
			else if ((i + 1) % 4 == 0)
				v1[i][0] = '#';
		}
	}
	
	for (auto k : v1)
		cout << k << endl;
	return 0;
}