#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n;
    long long int  v[n], sortedV[n], preV[150000] = {0}, preSprtedV[150000] = {0};
    for(int i = 0; i < n; i++){
        cin>>v[i];
        sortedV[i] = v[i];
    }
    sort(sortedV, sortedV+n);
    for(int i = 1; i <= n; i++){
        preV[i] = preV[i-1] + v[i-1];
        preSprtedV[i] = preSprtedV[i-1] + sortedV[i-1];
    }
    cin>>m;
    while(m--){
        int type, l, r;
        cin >>type >>l >>r;
        if(type == 1){
            cout<<preV[r] - preV[l-1]<<endl;
        }else {
            cout<<preSprtedV[r] - preSprtedV[l-1]<<endl;
        }
    }



    return 0;
}
