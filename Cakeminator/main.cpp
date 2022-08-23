#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    vector<string> v1(r);
    for (auto& i : v1)
        cin >> i;
    int count_row{};
    int count_{};
    for (size_t i = 0; i < r; ++i) {
        int temp{};
        for (size_t j = 0; j < c; ++j) {
            if (v1[i][j] != 'S') {
                temp++;
            }
        }
        if (temp == c) {
            count_row += c;
            count_++;
        }
    }
    for (size_t i = 0; i < c; ++i) {
        int temp{};
        for (size_t j = 0; j < r; ++j) {
            if (v1[j][i] != 'S') {
                temp++;
            }
        }
        if (temp == r) {
            count_row += temp - count_;
        }
    }
    cout << count_row << "\n";
    return 0;
}