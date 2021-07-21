#include <iostream>
#include <string>
using namespace std;

int main() {
  
    string a,b;
    int sizeA,sizeB;
    char firstA,firstB;
    cin >> a;
    cin >> b;
    sizeA = a.size();
    sizeB = b.size();
    
    
    cout << sizeA << " " << sizeB << endl;
    cout << a << b << endl;
    
    firstA = a[0];
    firstB = b[0];
    a[0] = firstB;
    b[0] = firstA;
    
    cout << a << " " << b;
    return 0;
}
