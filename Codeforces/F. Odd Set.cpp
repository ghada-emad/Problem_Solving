//Accepted	Time:30 ms	Memory:4 KB
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#define ll long long
#define endl '\n'
using namespace std;
int main() {
	ll t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int even = 0, odd = 0;
		for (int i = 0; i < 2 * n; i++) {
			int num;
			cin >> num;
			if (num % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
		}
		if (even == odd) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

}
