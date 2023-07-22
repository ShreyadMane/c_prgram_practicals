#include<stdio.h>
int main(){

  char c[20],search,d;
  /*char s[]={"abcdefghijklmnopqrstuvwxyz"};
  for(int i=0;i<=25;i++){
  printf("%c",s[i]);
  }
  printf("Enter string=");
  scanf("%s",&c);
  printf("%s",c);*/
  for(d='a';d<'z';d++)
  {
   printf("%c",d);
  }
  printf("Enter %c string=",d);
   for(d='a';d<'z';d++)
   {
       scanf("%c",&c[d]);
   }
   for(d='a';d<'z';d++)
   {
       printf("%c",c[d]);
   }


}
