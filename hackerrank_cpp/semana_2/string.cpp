#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

void swap(string a2, string b2){
    char aux = a2[0];
    a2[0] = b2[0];
    b2[0] = aux;
    
    cout << a2 << " " << b2 << "\n";
}

int main() {
    string a,b;
    getline(cin, a);
    getline(cin, b);
    
    cout << a.length() << " " << b.length() << "\n";
    cout << a + b << "\n";
    swap(a, b);
    
    return 0;
}
