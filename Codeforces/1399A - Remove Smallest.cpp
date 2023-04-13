//Accepted, Time : 15ms	, Memory: 0 KB	,Apr/08/2023 03:45 AM
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool Istrue = true;
        for (int j = n - 1; j > 0; j--)
        {
            if (arr[j] - arr[j - 1] > 1)
            {
                Istrue = false;
                break;
            }
        }
        if (Istrue) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
