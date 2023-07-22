#include<stdio.h>
int main(){
    int a,i;
    printf("Enter value=");
    scanf("%d",&a);
    for(i=10;i>a;i--){
        printf("%d\n",i);
    }
}

