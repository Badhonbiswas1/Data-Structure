#include<stdio.h>
int main()
{
    int n,m,mid,high,low;
    int arr[50];
    printf("Enter the arr: ");
    scanf("%d",&n);
    printf("Enter the Ele: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key:\n");
    scanf("%d",&m);
    low=0;
    high=n-1;
    int Found=0;
    while(low<=mid){
        mid=(low+high)/2;
        if(arr[mid]==m){
            printf("%d is the number of index %d",m,mid);
            Found=1;
            break;
        }
        else if(arr[mid]<m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}

