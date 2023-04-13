#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector < pair<int, int>>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	/*int max = v[0].second;
	for (int i = 0; i < n; i++)
	{
		if (v[i].second > max) {
			max = v[i].second;
		}
		v.push_back(make_pair(v[i].first,max));
	}*/
	sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b)
		{
			return a.second > b.second;
		});
	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
}
