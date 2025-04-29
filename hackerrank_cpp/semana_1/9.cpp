#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int q, n, k;
    scanf("%d %d", &n, &q);
    vector<vector<int>> arr(n);
    for(int x=0; x<n; x++){
        scanf("%d[^\n] ", &k);
        arr[x].resize(k);
        for(int y=0; y<k; y++){
            scanf("%d[^\n] ", &arr[x][y]);
            scanf("\n");
        }
    }
    for(int z=0;z<q; z++){
        int i, j;
        scanf("%d %d", &i, &j);
        printf("%d\n", arr[i][j]);
    }
    return 0;
}
