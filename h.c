#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
  int pid = fork();
if(pid<0){
printf("failed");
}
 else if(pid==0){
printf("Child process:");
}
else{
wait(NULL);
printf("Parent process:");
}
return 0;
}
