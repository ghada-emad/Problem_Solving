#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0) {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count+=1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
