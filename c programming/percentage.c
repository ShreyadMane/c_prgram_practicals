#include<stdio.h>
int main(){
    int Marathi,English,Maths,Hindi,Science;
    printf("Enter the marks=");
    scanf("%d%d%d%d%d",&Marathi,&English,&Maths,&Hindi,&Science);
    printf("Marathi=%d\n",Marathi);
    printf("English=%d\n",English);
    printf("Maths=%d\n",Maths);
    printf("Hindi=%d\n",Hindi);
    printf("Science=%d\n",Science);
    int total=Marathi+English+Maths+Hindi+Science;
    printf("Total Marks of subs are=%d\n",total);
    int average=total/5;
    printf("Average is=%d\n",average);

    if(average>35&&average<60){
        printf("YOU ARE PASS..");
    }
    else if(average>60&&average<75){
        printf("PASS WITH FIRST CLASS..");
    }
    else if(average>75&&average<=100){
        printf("CONGRATULATION!!!YOU ARE PASS WITH FIRST CLASS DISTINGTION..");
    }

    return 0;
}
