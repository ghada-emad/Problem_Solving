#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<math.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;
    if (n % 2 != 0)
    {
        if (k <= (n / 2) + 1) 
        {
            cout << (k * 2) - 1 << endl;
        }
        else {
            cout << (k - ((n / 2) + 1)) * 2 << endl;
        }        
    }
    else
    {
        if (k <= n / 2)
        {
            cout << (k * 2) - 1 << endl;
        }
        else { cout << (k - (n / 2)) * 2 << endl; }
    }

    return 0;

}
