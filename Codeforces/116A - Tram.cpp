#include <iostream>
#include <string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	int c = 0; int m = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		c -= a;
		c += b;
		if (c > m)
		{
			m = c;
		}

	}
	cout << m << endl;
	return 0;

	
}
