#include<stdio.h>
int main(){
    int num,c=0,i;
    printf("Enter number=");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==2){
        printf("The no is prime");
    }
    else{
    printf("No not a prime");
    }
}
