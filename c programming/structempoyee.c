#include<stdio.h>
struct Employee{
    int id,salary,mobaile_no;
    char name[20];


};
int main(){
struct Employee emp={100,50000,7420804495,"sheya"};
    printf("%s\n",emp.name);
    printf("%d\n",emp.id);
    printf("%d\n",emp.salary);
    printf("%d",emp.mobaile_no);

}
