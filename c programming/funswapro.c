#include<stdio.h>
void function(){
    int a=10;
    int b=20;
    int temp;
  temp=a;
  a=b;
  b=temp;
  printf("after swap%d\n",a);
  printf("after swap%d\n",b);

}
int main(){
function();
return 0;
}
