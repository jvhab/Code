#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int res = 0;
	if (a > b)
	{
		cout << b << " ";
		res = (a - b) / 2;
		cout << res << endl;
	}
	else
	{
		cout << a << " ";
		res = (b - a) / 2;
		cout << res << endl;
	}
	return 0;
}