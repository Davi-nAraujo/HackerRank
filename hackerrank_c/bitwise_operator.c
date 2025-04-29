#include <stdio.h>

void calculate_the_maximum(int n, int k, int AND, int OR, int XOR) {
    for(int i=1; i<n; i++){
        for(int j=(i+1); j<=n; j++){
            if((i & j) < k && (i & j) > AND){
                AND = (i & j);
            }
            if((i | j) < k && (i | j) > OR){
                OR = (i | j);
            }
            if((i ^ j) < k && (i ^ j) > XOR){
                XOR = (i ^ j);
            }
        }
    }
    printf("%d\n%d\n%d\n", AND, OR, XOR);
}

int main() {
    int n, k, AND, OR, XOR;
    AND = 0;
    OR  = 0;
    XOR = 0;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k, AND, OR, XOR);
 
    return 0;
}
