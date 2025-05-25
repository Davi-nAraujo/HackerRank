#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>vetor;
    for(int i =0; i < n; i++){
        int numero;
        cin >> numero;
        vetor.push_back(numero);
    }
    int position;
    cin >> position;
    vetor.erase(vetor.begin() + position - 1);
    int range_min, range_max;
    cin >> range_min;
    cin >> range_max;
    vetor.erase(vetor.begin() + range_min - 1, vetor.begin() + range_max - 1);
    cout << vetor.size() << "\n";
    for(int i = 0; i < vetor.size(); i++){
        cout << vetor[i] << " ";
    }
    return 0;
}
