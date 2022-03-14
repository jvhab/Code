#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int res = min(max(2 * a, b), max(a, b * 2));
		cout << res * res << "\n";
	}
	return 0;
}