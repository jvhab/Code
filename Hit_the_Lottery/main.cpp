#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int count = 0;
	count = n / 100;
	int temp = n % 100;
	count += temp / 20;
	temp = temp % 20;
	count += temp / 10;
	temp = temp % 10;
	count += temp / 5;
	temp = temp % 5;
	count += temp;
	cout << count << endl;
	return 0;
}