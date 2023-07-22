#include<stdio.h>
int swap(int*,int*);
int main(){
    int a,b;
    printf("Enter values=");
    scanf("%d",&a,&b);
    printf("Before swap=%d %d\n",a,b);
    swap(&a,&b);
    printf("After swap=%d %d\n",a,b);
}
int swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("After all swapping values are=%u %u\n",*a,*b);
    return 0;
}
