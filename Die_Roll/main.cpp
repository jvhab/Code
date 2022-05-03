#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int y, w;
	cin >> y >> w;
	int res;
	if (y > w)
	{
		res = 6 - y + 1;
		if (res == 1)
			cout << 1 << "/" << 6;
		else if (res == 2)
			cout << 1 << "/" << 3;
		else if (res == 3)
			cout << 1 << "/" << 2;
		else if (res == 4)
			cout << 2 << "/" << 3;
		else if (res == 5)
			cout << 5 << "/" << 6;
		else if (res == 6)
			cout << 1 << "/" << 1;
	}
	else
	{
		res = 6 - w + 1;
		if (res == 1)
			cout << 1 << "/" << 6;
		else if (res == 2)
			cout << 1 << "/" << 3;
		else if (res == 3)
			cout << 1 << "/" << 2;
		else if (res == 4)
			cout << 2 << "/" << 3;
		else if (res == 5)
			cout << 5 << "/" << 6;
		else if (res == 6)
			cout << 1 << "/" << 1;
	
	}
	return 0;
}