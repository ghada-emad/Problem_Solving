#include<iostream>
#include<queue>
#include<stack>
#include<deque>
using namespace std;

int main() {
    string s;
    stack<char>close;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '[')
        {
            close.push(']');
        }
        else if (s[i] == '<') {
            close.push('>');
        }
        else if (s[i] == '{')
        {
            close.push('}');
        }
        else if (s[i] == '(')
        {
            close.push(')');
        }
        else {
            if (close.empty() || s[i] != close.top()) {
                cout << "NO" << '\n';
                return 0;
            }
            else {
                close.pop();
            }
        }
    }
    if (close.empty()) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}
