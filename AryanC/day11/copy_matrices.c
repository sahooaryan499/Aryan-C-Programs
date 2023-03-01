#include<stdio.h>
int main(){
    int i,a[3][3],b[3][3];
    for(i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("Enter the values of matrix:");
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}