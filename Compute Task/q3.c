#include <stdio.h>

int main()
{
    int n=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a[n];
    for(int i=0;i<n;i++)
    a[i] = arr[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(a[i] == arr[i]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}