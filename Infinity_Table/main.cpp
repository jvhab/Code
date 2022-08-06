#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long k;
		cin >> k;
		int temp{1};
		int col{1}, row{1};
		for (long long i = 1; i <= k; ++i) {
			if (i * i >= k) {
				if (((i - 1) * (i - 1)) + i >= k) {
					col = i;
					for (long long j = 1; j <= i; ++j) {
						if ((i - 1) * (i - 1) + j == k) {
							row = j;
							break;
						}
					}
					break;
				}
				else {
					row = i;
					for (long long j = 1; j <= i; ++j) {
						if (((i - 1) * (i - 1) + i + j) == k) {
							col = i - j;
							break;
						}
					}
					break;
				}
			}
		}
		cout << row << " " << col << "\n";
	}
	return 0;
}