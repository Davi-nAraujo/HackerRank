#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int inteiro;
    long longo;
    char caracter;
    float fl;
    double duplo;
    scanf("%d %ld %c %f %lf", &inteiro, &longo, &caracter, &fl, &duplo);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", inteiro, longo, caracter, fl, duplo);
    return 0;
}
