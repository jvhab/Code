#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <numeric>
using namespace std;

void solve() {
	int n;
	cin >> n;
	priority_queue<long long> q1;
	priority_queue<long long> q2;
	long long temp{};
	for (size_t i = 0; i < n; ++i) {
		long long a;
		cin >> a;
		q1.push(a);
	}
	for (size_t i = 0; i < n; ++i) {
		long long b;
		cin >> b;
		q2.push(b);
	}
	int res{};
	for (; !q1.empty() && !q2.empty();) {
		if (q1.top() == q2.top()) {
			q1.pop();
			q2.pop();
		}
		else {
			if (q1.top() > q2.top()) {
				res++;
				temp = to_string(q1.top()).size();
				q1.pop();
				q1.push(temp);
			}
			else {
				res++;
				temp = to_string(q2.top()).size();
				q2.pop();
				q2.push(temp);
			}
		}
	}
	cout << res << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}