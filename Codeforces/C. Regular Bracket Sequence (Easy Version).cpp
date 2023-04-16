
#include <iostream>
#include <deque>
#include<stack>
using namespace std;

int main() {
     std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> s;
    string test;
    cin >> test;
    int count = 0;
    for (int i = 0; i < test.size(); i++) {
        if (test[i] == '(') {
            s.push(test[i]);
            
        }
        else if (test[i] == ')') {
            if (!s.empty() && s.top() == '(') {
                s.pop();
                count+=2;
            }
           
        }
    }
    cout << count << endl;
    return 0;
                
}
