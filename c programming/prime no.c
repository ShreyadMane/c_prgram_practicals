#include<stdio.h>
int main(){
    int n,i,temp=0;
    printf("Enter any number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%2==0){
            temp++;
        }
    }
    if(temp==0){
        printf("Number is prime number");

    }else{
        printf("Number is not prime ");

    }
    return 0;
}

