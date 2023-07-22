#include<stdio.h>
int main(){
    int r,i,area;
    float pi=3.14;
    printf("Enter value=");
    scanf("%d",&r);
    for( i=1;i<r;i++)
    {
    area=r*pi;
    printf("%d",area);
    }
}
