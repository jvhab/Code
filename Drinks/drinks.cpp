#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v1(n);
	for (auto& i : v1)
	{	
		cin >> i;
	}
	double sum_element = accumulate(v1.begin(), v1.end(), 0.0) / n;
	cout << sum_element;
	return 0;
}