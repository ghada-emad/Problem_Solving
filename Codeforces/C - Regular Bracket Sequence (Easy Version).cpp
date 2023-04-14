//Accepted	,time:15 ms,Memory:2100 KB, Apr/14/2023 02:41 AM
#include <iostream>
#include <stack>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> s;
    string test;
    cin >> test;

    for (int i = 0; i < test.size(); i++) {
        if (test[i] == '(') {
            s.push(test[i]);
        }
        else if (test[i] == ')') {
            if (!s.empty() && s.top() == '(') {
                s.pop();
            }
            else {
                cout << "No" <<'\n';
                return 0;
            }
        }
    }

    if (s.empty()) {
        cout << "Yes" << '\n';
    }
    else {
        cout << "No" << '\n';
    }

    return 0;
}
