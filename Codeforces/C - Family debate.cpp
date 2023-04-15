#include <iostream>
#include <deque>
using namespace std;

int main() {
    int q;
    cin >> q;
    deque<char> s;
    char last_removed ;

    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 1) {
            last_removed = s.front();
            s.pop_front();
        }
        else if (query == 2) {
            last_removed = s.back();
            s.pop_back();
        }
        else if (query == 3) {
            char c;
            cin >> c;
            s.push_front(c);
        }
        else {
            char c;
            cin >> c;
            s.push_back(c);
        }
        if (s.empty()) {
            cout << i + 1 << " " << last_removed << endl;
            continue;
        }
    }

    return 0;
}
