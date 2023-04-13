#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main() {
	int num;
	int n;
	int even = 0;
	int num_even = 0;
	int num_odd = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> num;
		if (num % 2 == 0) {
			even++;
			num_even = i;
		}
		else {
			even--;
			num_odd = i;
		}
	}
	if (even > 0 ? cout << num_odd : cout << num_even);
	
}
