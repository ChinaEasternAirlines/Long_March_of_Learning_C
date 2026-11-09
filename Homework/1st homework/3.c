#include<stdio.h>
/*f(n) = 2*[f(n-1)+1]*/
int N = 1;
int main(void){
    for(int n = 1;n < 5;n++){
        N = 2 * (N + 1);
    }
    printf("%d\n",N);
    return 0;
}