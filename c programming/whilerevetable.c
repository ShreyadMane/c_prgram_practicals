#include<stdio.h>
int main(){
    int n=10;
    int i;
    printf("Enter the number=");
    scanf("%d",&i);
    while(n>=1){
        printf("%d\n",n*i);
        n--;
    }
}
