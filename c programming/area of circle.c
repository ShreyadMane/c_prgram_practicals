#include<stdio.h>
int main(){
    int radious;
    float area,pi=3.14;
    printf("Enter radious=");
    scanf("%d",&radious);
    area=pi*radious*radious;
    printf("%f",area);
    return 0;
}
