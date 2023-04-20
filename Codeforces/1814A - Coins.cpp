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
int main() {
	fast();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        if (n%2==0)
            cout << "YES" << endl;
        else if (n % k == 0)
            cout << "YES" << endl;
        else if ((n - k) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
  return 0;
}
