#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<math.h>
#include<iomanip>
#include <cwctype>
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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        if (s == "^")count++;
        else if (s == "_")count += 2;
        else
        {
            if (s[0] == '_')count++;
            if (s[n - 1] == '_')count++;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '_' && s[i + 1] == '_')count++;
            }

        }
        cout << count << endl;
    }
}
