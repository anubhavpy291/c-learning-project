#include <stdio.h>
#include <string.h>

struct car
{
    char name[20];
    int model;
    int speed;

};

struct bike
{
    struct car c1;
    
};
void func(struct car *c){
    printf("%d\n",c->speed);
}
union idk{
    int age;
    int id;
};
typedef struct{
    int age;
    int id;
    int height;
} peep;
int main(){
    struct car c1 = {"audi",345,345};
    struct car c4;
    union idk i;
    i.age = 45;
    printf("%d",i.age);
    peep p;
    p.age = 45;
    printf("%d",p.age);
    c4 = c1;
    struct car *sptr = &c4;
    func(&c4);
    printf("%d\n",sptr->speed);
    struct car c2;
    struct bike b;
    b.c1.speed = 45;
    printf("%d\n", b.c1.speed);
    strcpy(c2.name,"rpm");
    c2.model = 452;
    printf("%s",c2.name);
    printf("%s\n",c1.name);
    return 0;
}