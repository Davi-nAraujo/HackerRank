#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    
    for(int k = 0; k <=((2*n)-2); k++){
        for(int j = 0, n_2 = n; j <= ((2*n)-2); j++){
            if((n-k) < n_2 && (n-j) < n_2 && (j+k) < (2*n -1)){
                n_2--;
            }
            if(((j+1)-n) >= n_2){
                n_2++;
            }
            
            printf("%d ", n_2);
        }
        printf("\n");
    }
    return 0;
}