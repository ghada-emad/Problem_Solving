#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            res += 1;
        }
        else {
            res += 2;
        }
    }
    cout << res;
}
