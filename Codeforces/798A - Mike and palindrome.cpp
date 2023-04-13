#include<iostream>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    int length = s.size();
    int count = 0;
    if (length % 2 == 0)
    {
        for (int i = 0; i < length / 2; i++)
        {
            if (s[i] != s[length - i - 1])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    if (length % 2 != 0)
    {
        for (int i = 0; i < length / 2; i++)
        {
            if (s[i] != s[length - i - 1])
            {
                count++;
            }
        }
        if (count <= 1)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
