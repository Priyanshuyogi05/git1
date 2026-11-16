#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
  int pid = fork();
if(pid<0){
printf("failed");
}
 else if(pid==0){
sleep(5);
printf("Child process:");
printf("Child  PID:%d\n",getpid());
printf("parent of child process is :%d\n",getppid());
}
else{
wait(NULL);
printf("Parent process:");
printf("parent PID: %d\n",getpid());
printf("inside parent block :child PID: %d\n",pid);
printf("parent of parent process is :%d\n",getppid());
}
return 0;
}
