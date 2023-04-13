#include<iostream>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    char c;
    bool cap = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            cap = false;
        }
    }
    if (cap == true)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (islower(s[j]))
            {
                c=toupper(s[j]);
            }
            else {
                c=tolower(s[j]);
            }
            cout << c;
        }
    }
    else {
        cout << s << '\n';
    }
    
    
    
    return 0;
}
