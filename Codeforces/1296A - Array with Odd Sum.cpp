#include<iostream>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
      
        int n;
        cin >> n;
        int arr[n];
        int sum=0;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0 || arr[i] == 1)
            {
                odd++;
            }
            else {
                even++;
            }
            sum += arr[i];
        }
        if (sum % 2 != 0)
        {
            cout << "YES" << endl;
        
        }
        else {
            if (even != 0 && odd != 0)
            {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        
    }
}
