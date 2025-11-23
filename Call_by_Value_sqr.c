#include <stdio.h>
void square(int n);
int main(){
    int num = 7;
    square(num);
    printf("Number: %d\n", num);
    return 0;
}
void square(int n){
    n = n*n;
    printf("Square: %d\n",n);
}