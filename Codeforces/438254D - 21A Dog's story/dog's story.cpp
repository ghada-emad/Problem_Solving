#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<math.h>
#define ll long long
#define endl '\n'
using namespace std;

int main() {

        int n, pills = 0, woofs = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num > 0) {
                pills += num;
            }
            else { 
                if (pills > 0) {
                    pills--;
                }
                else {
                    woofs++;
                }
            }
        }
        cout << woofs << endl; 
        return 0;
    

	
}
