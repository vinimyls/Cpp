#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int command;
    int value;
    set<int>s;
    for(int i; i< n; i++)
    {
        cin >> command;
        cin >> value;
        if(command == 1) 
            s.insert(value);
        else if(command == 2) 
            s.erase(value);
        else if(command == 3) 
        {
            set<int>::iterator it=s.find(value);
            if (it==s.end()) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }  
    return 0;
}
