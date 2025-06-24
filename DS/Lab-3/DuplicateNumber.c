#include<stdio.h>
int main(){
    int arr[100],i,j,n;
    printf("Enter the Elements of the Array:");
    scanf("%d",&n);
    
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
    printf("The duplicate Elements are\n:");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[i]);
                break;
            }
        }

    }
    return 0;
    
    }




    
