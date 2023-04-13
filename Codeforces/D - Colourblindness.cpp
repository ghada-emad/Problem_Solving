#include <iostream>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string first;
        string second;
        cin >> first >> second;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (first[i] != second[i] && (first[i] == 'R' || second[i] == 'R'))
            {
                flag=1;
                break;
            }
           
        }
        if (flag) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
