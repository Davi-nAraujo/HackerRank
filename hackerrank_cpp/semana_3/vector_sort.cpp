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
    for(int i = 0; i < n; i++){
        int numero;
        cin >> numero;
        vetor.push_back(numero);
    }
    sort(vetor.begin(), vetor.end());
    for(int i = 0; i < n; i++){
        int size=vetor.size();
        cout << vetor[n - size] << " ";
        vetor.pop_back();
    }
    return 0;
}
