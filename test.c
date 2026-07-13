#include <stdio.h>
#include <string.h>
void removequotes(char *command){
    int i = 0;
  while(command[i] != '\0')
    {
    if(command[i] == 'a')
    {
        for(int j = i; command[j] != '\0'; j++)
        {
            command[j] = command[j+1];
        }

        i--;
    }

    i++;
    }
    printf("%s",command);
}
int main(){
    char cmd[] = "a~a";
    removequotes(cmd);
    return 0;
}