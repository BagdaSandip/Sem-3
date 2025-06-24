#include<stdio.h>
void main(){
    int n,i,j,duplicate=0;
    printf("Enter the Elements of the Array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d Elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate)
        break;
    }
    if(duplicate){
        printf("Array Contains the duplicate elements");
    }
    else{
        printf("Array does not contains the duplicate Elements");
    }

}
