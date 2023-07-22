#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter numbers=");
    scanf("%d%d",&a,&b);
    printf("Before swap=%d %d\n",a,b);
    swap(&a,&b);
    printf("After swap=%d %d\n",a,b);

}
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("Display final swap=%d %d\n",*a,*b);
}
