#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int a, b, c;
    int sum_A = 0, sum_B = 0, sum_C = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        sum_A += a;
        sum_B += b;
        sum_C += c;
    }
    if (sum_A == 0 && sum_B == 0 && sum_C == 0)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
