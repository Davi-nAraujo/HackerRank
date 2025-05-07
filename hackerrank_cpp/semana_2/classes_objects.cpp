#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

class student{
    private:
    vector<int>scores;
    
    public:
    void input(){
        int score;
        string linha;
        getline(cin, linha);
        stringstream ss(linha);
        while(ss >> score){
            scores.push_back(score);
        }
    }
    
    int calculateTotalScore(){
        int total_score = 0;
        for(int score : scores){
            total_score += score;
        }
        return total_score;
    }
};

int main() { 
    int numero_estudantes;
    string linha;
    getline(cin, linha);
    stringstream ss(linha);
    ss >> numero_estudantes;
    vector<student>estudantes(numero_estudantes);
    
    for(int k = 0; k < numero_estudantes; k++){
        estudantes[k].input();
    }
    int notas_maiores = 0;
    int nota_kristen = estudantes[0].calculateTotalScore();
    for(int k = 1; k < numero_estudantes ; k++){
        if(nota_kristen < estudantes[k].calculateTotalScore()){
            notas_maiores += 1;
        }
    }

    cout << notas_maiores;
    return 0;
}
