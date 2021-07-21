#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector<int>v;
    
    int actual;
    int start;
    int end;
    
    cin >> n;
    for (int i =0; i < n; i++) 
    {
        cin >> actual;
        v.push_back(actual);   
    }
    
    cin >> actual;
    cin >> start >> end;
    v.erase(v.begin()+actual-1);
    v.erase(v.begin()+start-1,v.begin()+end-1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) 
    {
           cout << v[i] << " ";
    }
    return 0;
}
