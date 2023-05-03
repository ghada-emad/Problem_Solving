#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#define ll long long
#define endl '\n'
using namespace std;
void fast() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	fast();
	ll t;
	cin >> t;
    while (t--) {
		int n;
		cin >> n;
		set<int>s;
		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			s.insert(num);
		}
		if (s.size() < 2)
		{
			cout << -1 << endl;
		}
		else {
			auto itr = s.end();
			itr--;
			itr--;
			cout << *itr << endl;
		}
    }
   
    return 0;
}
