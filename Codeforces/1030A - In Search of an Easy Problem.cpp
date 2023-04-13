//Accepted , Time :15 ms,Memory :	0 KB,Apr/08/2023 03:05 AM
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a;
    int arr[900];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum >= 1)
    {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }
}
