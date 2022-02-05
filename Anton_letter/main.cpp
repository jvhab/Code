#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    set<string> st1;
    getline(cin, s1);
    for (size_t i = 0; i < s1.size(); ++i)
    {
        if (isalpha(s1[i]))
        {
            st1.insert(string(1, s1[i]));
        }
    }
    cout << st1.size();
    

    return 0;
}
