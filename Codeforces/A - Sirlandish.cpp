#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,g;
    cin >> s>>g;
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == g[n -i- 1])
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
