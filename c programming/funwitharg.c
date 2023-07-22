#include<stdio.h>
int square(int number);
void main()
{
   int n;
   printf("Enter number=");
   scanf("%d",&n);
   printf("%d",square(n));

}
int square(int number)
{

    return(number*number);
}
