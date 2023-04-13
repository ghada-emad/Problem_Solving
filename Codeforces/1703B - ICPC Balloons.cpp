#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int freq[26] = { 0 };
		int index;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			index = s[i] - 'A';
			if (freq[index] == 0) {
				freq[index] += 2;
			}
			else {
				freq[index] += 1;
			}
		}
		for (int i = 0; i < 26; i++) {
			sum += freq[i];
		}
		cout << sum << endl;
		sum = 0;
	}
}
