#include <iostream>
#include <vector>
#include<iostream>
#include <algorithm>
#include<vector>
struct rectangle {
    float x1, y1, x2, y2, x3, y3, x4, y4;
};
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<rectangle>rectangle(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rectangle[i].x1 >> rectangle[i].y1 >> rectangle[i].x2 >> rectangle[i].y2 >> rectangle[i].x3 >>
            rectangle[i].y3 >> rectangle[i].x4 >> rectangle[i].y4;
    }
    reverse(rectangle.begin(), rectangle.end());
    for (int i = 0; i < n; i++)
    {
        cout << rectangle[i].x1 << " " << rectangle[i].y1 << " " << rectangle[i].x2 << " " <<
            rectangle[i].y2 << " " << rectangle[i].x3 << " " << rectangle[i].y3 << " " <<
            rectangle[i].x4 << " " << rectangle[i].y4 << " "<<endl;
    }
    return 0;
}
