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
		int h, m;
		cin >> h >> m;
		res = (23 - h) * 60 + (60 - m);
		cout << res << "\n";
	}
	return 0;
}