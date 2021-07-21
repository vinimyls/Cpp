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
    cin >> n;
    for(int i; i< n; i++)
    {
        cin >> actual;
        v.push_back(actual);
    }
    
    for(int i; i< n; i++)
    {
        sort(v.begin(),v.end());
        cout << v[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
