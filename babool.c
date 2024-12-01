#include<stdio.h>
int main()
{

    int n;
    int arr[60];
    printf("Enter the arr: ");
    scanf("%d",&n);
    printf("Enter the Ele: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Enter the Ele:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;


}
