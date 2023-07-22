#include<stdio.h>
struct student{
int roll_no;
char name[20];

};
int main(){
  struct student s1={1,"shreya"};
  printf("%d",s1.roll_no);
  printf("%s",s1.name);
}
