#include <stdio.h>


int max(int a , int b , int c ,int d){
    int max_ab = (a > b) ? a : b;
    int max_cd = (c > d) ? c : d;
    return (max_ab > max_cd ) ? max_ab : max_cd;

}

int max_of_four(int a, int b, int c , int d){
    int result = max(a, b, c ,d );
    return result ;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}