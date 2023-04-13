#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	int count = 0;
	for (char i =0; i < n; i++)
	{
		s[i] = tolower(s[i]);
	}
	sort(s.begin(), s.end());
	for (int i = 0; i <n; i++)
	{
		if (s[i] != s[i + 1])
		{
			count++;
		}
	}
	
	if (count == 26)
	{
		cout << "YES";
	}
	else {
		cout << "NO" ;
	}
}
