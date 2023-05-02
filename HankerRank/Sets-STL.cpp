#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s1;
    int q;
    cin>>q;
    while(q--)  {
        int x;
        int num;
        cin>>x;
        if(x==1){
            cin>>num;
            s1.insert(num);
        }else if(x==2){
           cin>>num;
           auto it=s1.find(num);
           if(it!=s1.end()){
               s1.erase(num);
           }
        }else{
            cin>>num;
            auto it1=s1.find(num);
            if(it1!=s1.end()){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
