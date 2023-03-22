#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, m;
    cin >> n >> m;
    vector<pair<double, double>> v1(n);
    for (auto& i : v1) {
        cin >> i.first >> i.second;
    }
    double mins{ 1000000 };
    for (size_t i = 0; i < n; ++i) {
        double temp = (v1[i].first / v1[i].second) * m;
        mins = min(temp, mins);
    }
    cout << setprecision(9) << mins << "\n";
    return 0;
}