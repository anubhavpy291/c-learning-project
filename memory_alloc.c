#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p,*p1;
    p = malloc(sizeof(*p));
    p1 = calloc(3,sizeof(*p1));
    p1[0] = 3;
    p1[1] = 2;
    p1[2] = 5;
    p[0] = 5;
    *p = 1;
    printf("%d %d %d %d ",p1[0],p1[1],p1[2],p[0]);

    int *ptr3, *ptr4;
    ptr3 = malloc(sizeof(*ptr3));
    ptr4 = realloc(ptr3,sizeof(*ptr3) * 5);
    free(ptr3);
    ptr3 = NULL;
    
    return 0;
}