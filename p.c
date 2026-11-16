#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("enter the number");
scanf("%d",&n);
int *p=malloc(n*sizeof(int));
printf("Enter the elements");
for(int  i=0; i<n;i++){
scanf("%d\n",&p[i]);
}
printf("Displaying the elements");
for( int i=0; i<n; i++){
printf("%d\n",p[i]);
}
free(0);
return 0;
}
