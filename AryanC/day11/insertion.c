#include<stdio.h>
int main(){
    int arr[10],i,s,pos,val;
    printf("Enter size:");
    scanf("%d",&s);
    printf("Enter the array:\n");
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to enter the value:");
    scanf("%d",&pos);
    printf("Enter the value to be inserted:\n");
    scanf("%d",&val);
    for(i<s-1;i<pos-1;i--){
        arr[i+1]=arr[i];
        }
    arr[pos-1]=val;
    printf("Final array after insertion is:");
    for(i=0;i<s;i++){
        printf("%d\t",arr[i]);
    }

}