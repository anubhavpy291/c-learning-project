#include <stdio.h>
#include <stdbool.h>

int main(){
    int age1 = 23;
    int ag2 = 16;
    ++ag2;
    age1 += 3;

    printf("%d",age1 > ag2);
    
    return 0;
}