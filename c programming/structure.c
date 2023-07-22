#include<stdio.h>

       struct student{
        int id;
        char name[20];

    };

int main(){

    struct student std;
    printf("%d",std.id);
    printf("%s",std.name);
}
