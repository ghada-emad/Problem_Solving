//Accepted	Time :15 ms 	Memory: 220 KB	
#include <iostream>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#define endl '\n';
#define ll long long ;
using namespace std;
void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fast();
    int n, m;
    cin >> n>>m;
    string name, ip, command;
    map<string, string>mp;
    
    for (int i = 0; i < n; i++) {
        cin >> name >> ip;
        ip += ';';
        mp[ip] = name;

    }
    for (int i = 0; i < m; i++) {
        cin >> command >> ip;
        cout << command << " " << ip << " #" << mp[ip] << endl;
       
    }
    
   

}
