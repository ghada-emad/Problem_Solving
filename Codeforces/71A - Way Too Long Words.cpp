#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int count = 0;
		if (s.size() > 10)
		{
			for (int i = 1; i < s.size() - 1; i++) {
				count++;
			}
			cout << s[0] << count << s[s.size() - 1]<<endl;
		}
		else {
			cout << s<<endl;
		}
	}

}
