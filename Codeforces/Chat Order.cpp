//Accepted	Time: 327 ms  Memory:15836 KB	
#include <iostream>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#define endl '\n';
#define ll long long ;
using namespace std;
void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fast();
    int n;
    cin >> n;
    string s[n];
    map<string, int>mp;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        if (mp[s[i]]!= 1)
        {
            cout << s[i] << endl;
            mp[s[i]] = 1;
        }
    }
   

}
