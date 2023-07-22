#include<stdio.h>
struct student{
    int id;
    char name[20];
};
void main(){
    struct student std[5];
    int i;
    for(i=0;i<5;i++){
    printf("Enter id=");
    scanf("%d",&std[i].id);
    printf("Enter name=");
    scanf("%s",std[i].name);
    }
    for(i=0;i<5;i++){
        printf("%d %s\n",std[i].id,std[i].name);

    }}
