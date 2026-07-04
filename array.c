#include <stdio.h>

int main(){
    int a[1];
    a[1] = 5;
    a[0] = 6;
    int b[] = {1,2,3,4,5,5};
    int lenth_b = sizeof(b) /sizeof(b[0]);
    for (int i = 0; i < lenth_b;i++){
        printf("%d\n",b[i]);
    }
    int d[1][2] = {{1,2,3},{1,3,4}};
    printf("%d\n",d[0][3]);
    return 0;

}