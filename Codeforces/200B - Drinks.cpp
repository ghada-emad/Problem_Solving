#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<math.h>
#include<iomanip>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    double n;
    cin >> n;
    double num;
    double sum = 0;
    for (int i=0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }
    double res = sum / n;
    cout << fixed << setprecision(12) <<res << endl;

    return 0;

}
