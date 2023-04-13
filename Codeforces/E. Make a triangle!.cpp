#include <iostream>
#include <string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c)
	{
		cout << (c - (a + b) + 1) << endl;
	}
	else if (a + c <= b) {
		cout << (b - (a + c) + 1) << endl;
	}
	else if (c + b <= a) {
		cout << (a - (c + b) + 1) << endl;
	}
	else cout << 0 <<  endl;

	
}
