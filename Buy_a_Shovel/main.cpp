#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k, r;
	cin >> k >> r;
	int res = 0;
	for (int i = 1; i <= 10; ++i)
	{
		if ((i * k) % 10 == 0)
		{
			cout << i << "\n";
			break;
		}
		else if ((i * k) % 10 == r)
		{
			cout << i << "\n";
			break;
		}
	}
	return 0;
}