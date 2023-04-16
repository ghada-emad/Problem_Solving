#include <iostream>
#include <deque>
using namespace std;

int main() {
     std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
         int n;
            cin >> n;
            string s;
            cin >> s;
            int i = 0, r = n - 1;
            int ans = n;
            while (i <= r)
            {
                if ((s[i] == '0' && s[r] == '1') || (s[i] == '1' && s[r] == '0'))
                {
                    ans -= 2;
                    i++;
                    r--;
                }
                else {
                    break;
                }
            }
            cout << ans << '\n';
    
    }
}
