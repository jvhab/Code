#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	long long x;
	cin >> n >> x;
	long long d;
	char temp;
	int cream{};
	int child{};
	while (n--) {
		cin >> temp;
		cin >> d;
		if (temp == '+') {
			x += d;
		}
		else if (temp == '-') {
			if (x < d) {
				child++;
			}
			else {
				x -= d;
			}
		}
	}
	cout << x << " " << child << "\n";

	return 0;
}