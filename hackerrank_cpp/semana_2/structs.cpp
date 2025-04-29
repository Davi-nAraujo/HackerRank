#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct caracteristicas {
    int age;
    string name;
    string last_name;
    int standard;
}; 

int main() {
    caracteristicas pessoa;
    cin >> pessoa.age;
    cin >> pessoa.name;
    cin >> pessoa.last_name;
    cin >> pessoa.standard;
    
    cout << pessoa.age << " " << pessoa.name << " " << pessoa.last_name << " " << pessoa.standard;
    return 0;
}
