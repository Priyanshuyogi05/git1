#include<stdio.h>
#include<unistd.h>
int main(){
void *ptr1,*ptr2, *ptr3;
ptr1=sbrk(0);
printf("Current break: %p",ptr1);
ptr2=sbrk(4096);
ptr3=sbrk(0);
printf("\nNew break: %p",ptr3);
printf("\nBytes allocated: %ld",ptr3-ptr1);
return  0;
}
