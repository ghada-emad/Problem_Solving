#include<iostream>
#include<queue>
#include<deque>
using namespace std;

int main() {
    string letter;
    while (cin >> letter)
    {
        deque<string>dq;
        string s = "";
        int home = 0;
        for (int i = 0; i < letter.size(); i++)
        {
            if (letter[i] == '[')
            {
                if (home) dq.push_front(s);
                else dq.push_back(s);
                home = 1;
                s = "";
            }
            else if (letter[i] == ']')
            {
                if (home) dq.push_front(s);
                else dq.push_back(s);
                home = 0;
                s = "";
            }
            else {
                s += letter[i];
            }
        }
        if (home) dq.push_front(s);
        else dq.push_back(s);
        for (int i = 0; i < dq.size(); i++) {
            cout << dq[i];
        }
        cout << '\n';
    }
    
    return 0;
}
