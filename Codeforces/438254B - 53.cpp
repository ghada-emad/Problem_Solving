#include <iostream>
#include <stack>
#include<vector>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0, temp_sum = 0, total_sum = 0, ans = INT_MIN;
        cin >> n;
        vector < int >v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            total_sum += v[i];
        }
        for (int i = 0; i < (n - 1); i++) {
            temp_sum = total_sum;

            temp_sum -= v[i];
            temp_sum -= v[i + 1];

            temp_sum += -v[i];
            temp_sum += -v[i + 1];

            if (temp_sum > ans)
            {
                ans = temp_sum;
            }
                
        }
        cout << ans << endl;
    }
    return 0;
}
