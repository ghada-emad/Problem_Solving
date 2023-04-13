//Accepted	Time: 311ms	 Memory: 0KB  Apr/14/2023 12:20 AM
#include<iostream>
#include<queue>
#include<stack>
#include<deque>

using namespace std;
int main() {
	deque<int>dq;
	int t;
	cin >> t;
	while (t--)
	{
		string test;
		cin >> test;
		int x;
		if (test == "push_back")
		{
			cin >> x;
			dq.push_back(x);
		}
		else if (test == "push_front")
		{
			cin >> x;
			dq.push_front(x);
		}
		else if (test == "pop_front")
		{
			
			dq.pop_front();
		}
		else if (test == "pop_back")
		{
			dq.pop_back();
		}
		else if (test == "front")
		{
			cout << dq.front() << endl;
		}
		else if (test == "back")
		{
			cout << dq.back() << endl;
		}
		else {
			cin >> x;
			cout<<dq.at(x-1)<<endl;
		}
	}
}
