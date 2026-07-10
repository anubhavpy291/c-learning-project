#include <stdio.h>

enum level{
    Eaxy = 1,
    Medium,
    Hard
};
typedef enum{
    Hi = 1,
    Hello,
    howryou
} intro;
int main(){
    intro in = Hi;
    enum level l = Eaxy;
    printf("%d",l);
    switch (in)
    {
    case 1:
        /* code */
        printf("hello");
        break;
    case 2:
        printf("how");
        break;
    case 3:
        printf(" are");
        break;
    default:
        printf("you");
        break;
    }
    return 0;
}