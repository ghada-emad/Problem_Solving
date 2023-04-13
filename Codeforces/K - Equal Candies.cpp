#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    int arr[1000];
    cin >> t;
    int n;
    int res = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int smallest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (smallest < arr[i]) {
                 res +=(arr[i] - smallest);
                
            }
        }
        cout << res << endl;
        res = 0;
    }

}
