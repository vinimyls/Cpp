#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int command;
    int value;
    int actual;
    string compare;
    string name;
    map<string,int>m;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> command;
        if(command == 1)
        {
            cin >> name >> value;
            m[name] += value;
        }
        if(command == 2)
        {
            cin >> compare;
            m.erase(compare); 
        }
        if(command == 3)
        {
            cin >> compare;
            map<string,int>::iterator itr=m.find(compare);
            if(itr==m.end()) cout << "0" << endl;
            else cout << itr->second << endl;
        }
    }
    return 0;
}
