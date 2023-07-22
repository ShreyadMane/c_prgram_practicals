#include<stdio.h>
int main(){
    int a;
    printf("Enter number=");
    scanf("%d",&a);
    if(a>0){
        printf("IT is positive=%d",a);
    }
    else if(a<0){
        printf("It is negative=%d",a);
    }
    else{
        printf("It is Zero=%d",a);
    }
}
