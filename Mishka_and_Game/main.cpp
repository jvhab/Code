#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int res = 0;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			res++;
		}
		else if (a < b)
		{
			res--;
		}
	}
	if (res > 0)
		cout << "Mishka" << "\n";
	else if (res < 0)
		cout << "Chris" << "\n";
	else if (res == 0)
		cout << "Friendship is magic!^^" << "\n";

}