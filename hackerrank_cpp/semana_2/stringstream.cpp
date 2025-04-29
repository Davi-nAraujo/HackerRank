#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    string str;
    cin >> str;
    stringstream ss(str);
    
    vector<int> numeros;
    int numero;
    char lixo;
    while(ss >> numero){
        numeros.push_back(numero);
        ss >> lixo;
    }
    
    for(int num : numeros){
        cout << num << "\n";
    }
    return 0;
}
