#include<stdio.h>
void function(int,int);
int main(){
    int a,b;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("Enter value of b=");
    scanf("%d",&b);

   function(a,b);

}
 void function(int a,int b){
   int temp=a;
   a=b;
   b=temp;
   printf("After swap a is=%d\n",a);
   printf("After swap b is=%d",b);
}


