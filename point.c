#include <stdio.h>

int main(){
    int a = 39;
    int *ptr = &a;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    int b[] = {1,2,3,4,5};
    int len = sizeof(b) / sizeof(b[0]);
    for (int i = 0; i < len; i++){
        printf("%d\n",*(b+i));
    }
}