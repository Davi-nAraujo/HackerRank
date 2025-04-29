#include <cmath>
#include <cstdio>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++){
         scanf("%d", &arr[n - i]);
    }
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
