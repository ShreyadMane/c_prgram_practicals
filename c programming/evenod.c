#include<stdio.h>
int main(){
    int a;
    printf("Enter number =");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is even",a);
    }
    else{
        printf("The number id odd",a);
    }
    return 0;
}
