#include<stdio.h>
int main(){
    int n,a[40],i,j,ele;
    printf("Enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements before deleting:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    printf("\nEnter element to delete:");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(ele==a[i]){
            for(int j=i;j<n;j++){
                a[i]=a[i+1];
            }
            n--;
            }
    }
        printf("\nElemets after deleting:");
        for(i=0;i<n-1;i++){
            printf("%d\t",a[i]);
        }
        
}
