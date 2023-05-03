#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<string>
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
	int n;
	cin >> n;
	map<string, int>m;
	string name;
	for (int i = 0; i < n; i++) {
		
		cin >> name;
		if (m.count(name) == 0) {
			m[name] = 1;
			cout << "OK" << endl;
		}
		else {
			int count = m[name]++;
			cout << name << count << endl;
		}
	}
   
    return 0;
}
