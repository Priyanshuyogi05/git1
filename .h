#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
  int pid = fork();
if(pid<0){
printf("failed");
}
 else if(pid==0){
printf("Child process:");
}
else{
printf("Parent process:");
}
return 0;
}
