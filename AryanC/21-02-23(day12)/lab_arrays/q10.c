#include<stdio.h>
int main(){
    int arr[50],i,j,n,s;
    printf("Enter total number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n-1);i++){
        for(j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                s = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = s;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
}
printf("\n");
}