#include<stdio.h>
int main(){
    int Marks;
    printf("Enter marks=");
    scanf("%d",&Marks);
    if(Marks==35){
        printf("pass",Marks);
    }
    else if(Marks>35&&Marks<75){
        printf("First class",Marks);

    }else if(Marks>75){
   printf("First class Dist",Marks);
    }
    else{
        printf("Fail",Marks);
    }
}
