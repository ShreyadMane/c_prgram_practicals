#include<stdio.h>
struct example{
    int id,price;
    char Dish_name[20];
};
int main(){
    struct example favdish;
     printf("Enter information");
    scanf("%d %d %s",&id,&price,&Dish_name);
    printf("Id is=%d\n",favdish.id);
    printf("dish name=%s\n",favdish.Dish_name);
    printf("price is=%d",favdish.price);


}
