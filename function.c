#include <stdio.h>

b = 1;
void func(void (fun)(int),int x);
int age(int age){
    printf("\n%d",age);
    return age;
}
void greeting(int name){
    printf("\n%d",name);
    printf("%d",age(name));
}

void countdown(int sec){
    if (sec > 0){
        printf("\n%d",sec);
        countdown(sec - 1);
        
    }
}
inline void new_fun(){
    printf("hello kid");
}
void func(void (*fun)(int), int x){
    fun(x);
}

int main(){
    new_fun();
    greeting(1);
    printf("%d",age(1));
    func(greeting,1);
    func(greeting,89);
    int (*fptr)(int) = age;
    printf("%d",fptr(10));
    countdown(4);
    return 0;
    
}
