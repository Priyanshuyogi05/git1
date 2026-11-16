#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
int pid =fork();
if(pid ==0){
printf("child process before exec\n");
execl("/bin/ls", "ls",NULL);
printf("this will not execute\n");
}
else{
wait(NULL);
printf("parent process after child completes\n");
}
return 0;
}
