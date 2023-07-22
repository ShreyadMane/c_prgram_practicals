#include<stdio.h>
int main(){
 int a,b,c;
printf("Enter the first number=");
scanf("%d",&a);
printf("Enter the second number=");
scanf("%d",&b);

a=a*b;
b=a/b;
a=a/b;

printf("after swap first no=%d\n",a);
printf("after swap second no=%d\n",b);
}
