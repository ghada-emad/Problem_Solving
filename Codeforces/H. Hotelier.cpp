#include <iostream>
#include <deque>
#include<stack>
#define ll long long
#define endl '\n'
using namespace std;

int main() {
     std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, arr[11];
    string s;
    cin >> n >> s;
    fill(arr, arr + 11, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            for (int j = 0; j < n; j++) {
                if (arr[j] != 1) {
                    arr[j] = 1;
                    break;
                }
            }
        }
        else if (s[i] == 'R') {
            for (int j = 9; j >= 0; j--) {
                if (arr[j] != 1) {
                    arr[j] = 1;
                    break;
                }
            }
        }
        else {
            arr[s[i] - '0'] = 0;
        }
    }
    for (int i = 0; i <= 9; i++) {
        cout << arr[i];
    }
    cout << endl;


    
    return 0;
}
