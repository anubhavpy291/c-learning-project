#include <stdio.h>


int main(){
    int age = 50;
    int bage = 60;
    if (age != bage){
        if (age < 20)
        {
            age = bage;
        }
    }
    else if (age == bage){
        age = 30;
    }
    else {
        age = 50;
    }
    age  = (age != bage) ? 50 : 40;

    printf("%d",age);

    switch (age)
    {
    case 10:
        /* code */
        age = 0;
        break;
    
    default:
        age = age;
        break;
    }
    return 0;
}