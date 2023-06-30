//Accepted	Time:15 ms	 Memory:100 KB
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
#define ll long long
#define endl '\n'
using namespace std;
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end(),greater<int>());
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
