#include <stdint.h>

int main(){
    int a = 45;
    int* prt = &a;
    int *prt2 = &a;
    printf("%d",*prt2);
    return 0;
}