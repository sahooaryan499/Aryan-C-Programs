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
    for(i=0;i<(n);i++){
        for(j=i+1;j<(n);j++){
            if(arr[i]<arr[j]){
                s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
            }
        }
    }
    printf("Sorted list in descending order:\n");
    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
}
printf("\n");
}