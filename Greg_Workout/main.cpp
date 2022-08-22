#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    queue<int> que;
    int chest{};
    int biceps{};
    int back{};
    for (size_t i = 0; i < n; ++i) {
        int a;
        cin >> a;
        que.push(a);
        if (que.size() == 3) {
            chest += que.front();
            que.pop();
            biceps += que.front();
            que.pop();
            back += que.front();
            que.pop();
        }
    }
    if (que.size() > 0) {
        chest += que.front();
        que.pop();
        if (que.size() > 0) {
            biceps += que.front();
            que.pop();
        }
    }
    int res = max({ chest, biceps, back });
    if (res == chest)
        cout << "chest";
    else if (res == biceps)
        cout << "biceps";
    else
        cout << "back";

    return 0;
}