//Accepted,Time: 15 ms	, Memory : 0 KB, Apr/08/2023 02:49
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    string s;
    cin >> s;
    string s1 = "hello";
    int j=0; 
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s1[j]) {
            j++;
        }
    }
    if (j == 5) {
        cout << "YES" << endl;
    }
    else { cout << "NO" << endl; }
}
