#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string card;
	cin >> card;
	vector<string> myCard(5);
	for (auto& i : myCard)
		cin >> i;
	bool flag = false;
	for (size_t i = 0; i < 5; ++i) {
		if ((myCard[i][0] == card[0]) || (myCard[i][1] == card[1])) {
			cout << "YES" << "\n";
			flag = true;
			break;
		}
	}
	if (!flag)
		cout << "NO" << "\n";
	return 0;
}