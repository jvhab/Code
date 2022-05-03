#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << 8 << " " << n - 8;
	}
	else
	{
		cout << 9 << " " << n - 9;
	}
	return 0;
}