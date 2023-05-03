#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int>m;
    int q;
    cin>>q;
    while(q--){
        int x;
        string name;
        int num;
        int sum=0;
        cin>>x;
        if(x==1){
            cin>>name>>num;
            if(m.find(name)==m.end()){
                m.insert(pair<string,int>(name,num));
            }
           else{
               m[name]+=num;
           }
        }else if(x==2){
            cin>>name;
            m.erase(name);
        }
        else {
            cin>>name;
            if(m.find(name)!=m.end()){
                cout<<m.find(name)->second<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }   
    return 0;
}
