#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "bladeriver";
    printf("%s\n",name);
    for (int i = 0; i < (sizeof(name) / sizeof(name[0])); i++){
        printf("%c\n",name[i]);
    }
    printf("%d",strlen(name));
    return 0; 
}