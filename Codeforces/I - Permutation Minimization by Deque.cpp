#include <iostream>
#include <deque>
#include<stack>
#define ll long long
#define endl '\n'
using namespace std;

int main() {
     std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       int  n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        deque<ll>dq;
        for (int i = 0; i < n; i++)
        {
            if (dq.empty())
            {
                dq.push_front(arr[i]);
            }
            else if (!dq.empty() && arr[i] < dq.front())
            {
                dq.push_front(arr[i]);
            }
            else {
                dq.push_back(arr[i]);
            }
        }
        for (auto num : dq)
        {
            cout << num << " ";
        }
        cout << endl;
    }


    
    return 0;
}
