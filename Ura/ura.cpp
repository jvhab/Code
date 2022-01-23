#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int p, q;
	cin >> n;
	int res = 0;
	while (n--)
	{
		cin >> p >> q;
		if ((q - p) >= 2)
			res++;
	}
	cout << res << "\n";
	return 0;
}