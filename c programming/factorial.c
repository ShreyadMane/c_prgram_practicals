#include<stdio.h>
int main(){
    int i;
    int fact=1;
    int n=3;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("%d\n",fact);
    }
}
