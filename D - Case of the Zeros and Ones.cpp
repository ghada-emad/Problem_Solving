//Accepted	,Time:15 ms	,Memory:600 KB ,Apr/14/2023 03:16AM
#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<char>s;
    int n;
    cin >> n;
    string test;
    cin >> test;
    for (int i = 0; i < n; i++)
    {
        if (!s.empty() && s.top() != test[i])
        {
            s.pop();
        }
        else {
            s.push(test[i]);
        }
    }
    cout << s.size() << '\n';
    return 0;
}
