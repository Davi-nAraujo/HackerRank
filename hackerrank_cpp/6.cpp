#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if(a > b){
        b=a;
    }
    else{
        a=b;
    }
    if(b>c){
        c =b;
    }
    else{
        b=c;
    }
    if(c>d){
        d=c;
    }
    else{
        c=d;
    } 
    return d;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}