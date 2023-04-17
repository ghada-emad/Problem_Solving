#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<math.h>
#define ll long long
#define endl '\n'
using namespace std;
int main() {
	ll n, k;
	cin >> n >> k;
	deque<ll>dq(n);
	for (int i = 0; i < n; i++)
	{
		cin >> dq[i];
	}
	int count = 0;
	ll x = dq.front();
	dq.pop_front();
	if (k >= n - 1) { cout << n;  }
	else {
		while (true) {
			if (count == k) { cout << x; return 0; }
			else {
				if (x > dq.front()) {
					count++;
					dq.push_back(dq.front());
					dq.pop_front();
				}
				else {
					count = 1;
					dq.push_back(x);
					x = dq.front();
					dq.pop_front();
				}
			}
		}
	}
	return 0;
}
