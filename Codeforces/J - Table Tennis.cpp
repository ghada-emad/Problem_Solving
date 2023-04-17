#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#define ll long long
#define endl '\n'
using namespace std;
int main() {
	ll n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	if (k >= n - 1) cout << *max_element(arr.begin(), arr.end()) << "\n";
	
	else {
		int count = 0, val = arr[0], f = 0;
		for (int i = 1; i < n; i++) {
			if (val > arr[i]) {
				count++;
			}
			else {
				val = arr[i];
				count = 1;
			}
			if (count == k) 
			{ 
				cout << val <<endl; 
				f = 1;
				break;
			}
		}
		if (!f) cout << val << endl;
	}
	return 0;
}
