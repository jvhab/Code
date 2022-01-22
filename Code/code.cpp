#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int y_n;
	std::cin >> y_n;
	std::string y_s;
	int cnt = 0;
	bool flags = true;
	while (flags)
	{
		y_n++;
		y_s = std::to_string(y_n);
		std::sort(y_s.begin(), y_s.end());
		for (std::size_t i = 0; i < y_s.size() - 1; i++)
		{
			if (y_s[i] == y_s[i + 1])
			{
				break;
			}
			else if (y_s[i] != y_s[i + 1])
			{
				cnt++;
			}

			if (cnt == 3)
			{
				flags = false;
				std::cout << y_n;
				break;
			}

		}
		cnt = 0;
	}
	return 0;
}