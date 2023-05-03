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
	ll n;
	cin >> n;
	set<string>s;
	while (n--) {
		string name;
		cin >> name;
		if (s.find(name)!=s.end()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
			s.insert(name);
		}
	}
   
    return 0;
}
