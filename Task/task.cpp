#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	bool flag = false;
	int n;
	cin >> n;
	while(n--)
	{
		int word;
		cin >> word;
		if (word == 1)
		{
			flag = true;
		}	
	}
	if (flag)
	{
		cout << "HARD";
	}
	else
		cout << "EASY";
	return 0;
}