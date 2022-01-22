#include <iostream>

int main()
{
	int n, h;
	int a;
	std::cin >> n >> h;
	int res = n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a;
		if (a > h)
		{
			res++;
		}
	}
	std::cout << res;
	return 0;
}