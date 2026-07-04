#include <stdio.h>

int main(){

    int m = 1;
    char name = 'a';
    char ch = 67;
    float age = 16.5;
    float total = (float) m * age;
    const int stimana = 20;

    printf("%c\n",name);
    printf("%d\n",sizeof(m));
    printf("%zu\n",sizeof(m));
    printf("%.2f\n",age);
    printf("%c\n",name);
    return 0;
    
}