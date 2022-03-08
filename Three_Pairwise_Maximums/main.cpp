#include <iostream>
#include <string>
#include <vector>
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
		vector<int> v1(3);
		for (auto& i : v1)
			cin >> i;
		sort(v1.begin(), v1.end());
		if (v1[1] != v1[2])
			cout << "NO" << "\n";
		else
		{
			cout << "YES" << "\n";
			cout << v1[0] << " " << v1[0] << " " << v1[1] << "\n";
		}

	}
	return 0;
}