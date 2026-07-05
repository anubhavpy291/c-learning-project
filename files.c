#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt","w");
    fprintf(fptr,"hello","a");
    fclose(fptr);
    fptr = fopen("hello.txt","a");
    fprintf(fptr,"hellosup");
    fclose(fptr);
    fptr = fopen("hello.txt","r");
    char read[100];
    fgets(read, 100, fptr);
    printf("%s", read);
    return 0;
}