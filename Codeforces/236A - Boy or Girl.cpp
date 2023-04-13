#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int count = 0;
    int n = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
