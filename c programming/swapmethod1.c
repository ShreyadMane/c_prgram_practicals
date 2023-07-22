#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
printf("Enter the value of a=");
scanf("%d",&a);

printf("Enter the value of b=");
scanf("%d",&b);

printf("before swap a is:%d\n",a);
printf("before swap b is:%d\n",b);

    c=a;
    a=b;
    b=c;
printf("after swap a is:%d\n",a);
printf("after swap b is:%d",b);
   // printf("a=%d",a);
   // printf("b=%d",b);

    return 0;
}
