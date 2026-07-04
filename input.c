#include <stdio.h>

int main(){
    int a;
    char b[30];
    scanf("%d",&a);
    printf("%d",a);
    scanf("%d%s",&a,&b);
    printf("%d%s",a,b);
    fget(b,sizeof(b),stdin);
    printf("%s\n",b);
    return 0;
}