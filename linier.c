#include<stdio.h>
int main()
{
    int n,m;
    int arr[50];
    printf("Enter the arr: ");
    scanf("%d",&n);
    printf("Enter the Ele: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key: \n");
    scanf("%d",&m);
    int Found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            printf("%d Is the number of index %d \n",arr[i],i);
            Found=1;
        }
    }
        if(!Found){
            printf("%d Element not match: ",m);
        }

    return 0;
}


