#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<math.h>
#include<iomanip>
#include <cwctype>
#define ll long long
#define endl '\n'
using namespace std;
void fast() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
}
int Solve() {
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        if (arr[i] <= i)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
int main() {
	fast();
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
}
