#include<stdio.h>
int main(){
  int score;
  printf("Enter the marks=");
  scanf("%d",&score);
  if(score<35){
    printf("Fail..");
  }else if(score>40&&score<60){
   printf("pass..");
   }else if(score>60&&score<75){
   printf("First class..");
   }else{
       printf("First class Distinction..");
   }

}
