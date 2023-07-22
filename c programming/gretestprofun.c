#include<stdio.h>
void greater(int,int,int);
int main(){
    int a,b,c;
    printf("Enter number=");
    scanf("%d\n%d\n%d\n",&a,&b,&c);

    printf("%d\n%d\n%d\n",a,b,c);
    greater(a,b,c);

}
void greater(int a,int b,int c)
{
    if(a>=b&&a>=c){
        printf(" greater number=%d",a);
    }
    else if(b>=a&&b>=c){
        printf(" is greater number=%d",b);
        }
    else{
        printf("C is greater number=%d",c);
    }
}
