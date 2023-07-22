#include<stdio.h>
int main(){
    int a[2][2];
    int b[2][2];
    int add[2][2];
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("Enter array=");
                scanf("%d",&a[i][j]);
            }
            }
    for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
           printf("%d",a[i][j]," ");
    }
      printf("\n");
    }

    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("Enter array=");
                scanf("%d",&b[i][j]);
            }
            }
    for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
           printf("%d",b[i][j]);
    }
      printf("\n");
    }

for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
               add[i][j]=a[i][j]+b[i][j];
            }
            }
            for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
               printf("Addition of two arrays are=%d",add[i][j]);
            }
            printf("\n");
            }
}
