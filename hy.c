#include<stdio.h>
#include<unistd.h>
int main(){
printf("Before exec\n");
execl("/bin/ls","ls","-l",NULL);
//execl("./h","h",NULL);
//char*args[] = {"h",NULL};execv("./h",args);
printf("After exe(this will not execute)\n");
return 0;
}
