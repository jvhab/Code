#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> cards(n);
	for (auto& i : cards)
		cin >> i;
	int i = 0;
	int j = n - 1;
	int Ser{};
	int Dim{};
	int temp{};
	while (temp != n ) {
		if (temp % 2 == 0) {
			if (cards[i] > cards[j]) {
				Ser += cards[i];
				i++;
			}
			else {
				Ser += cards[j];
				j--;
			}
		}
		else if (temp % 2 == 1) {
			if (cards[i] > cards[j]) {
				Dim += cards[i];
				i++;
			}
			else {
				Dim += cards[j];
				j--;
			}
		}
		temp++;
	}
	cout << Ser << " " << Dim << endl;
	return 0;
}