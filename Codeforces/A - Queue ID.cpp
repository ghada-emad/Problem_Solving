#include<iostream>
#include<queue>
//Accepted	time:30ms	 memory:0KB
#include<stack>
#include<deque>

using namespace std;
int main() {
	queue<int>q;
	long  t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int id, num;
		cin >> id >> num;
		if (id == 1)
		{
			q.push(num);
		}
		else if (id == 2 && !q.empty()) {
			if (num == q.front()) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
			q.pop();
		}


		else {
			if (q.empty()) {
				cout << "no" << '\n';
			}

		}
	}
}
