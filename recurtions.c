#include <stdio.h>

int binary(int deca){
    if (deca > 0){
        printf("%d", deca % 2);
        binary (deca / 2);
    }
}

int degre (int a, int b){
    if (b > 0){
        a = a * a;
        binary (b - 1); 
    }
    printf("\n%d\n", a);
}
int main(const int argc, const char** argv){
    binary (3);
    degre (3, 4);
    return 0;
}