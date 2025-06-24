#include<stdio.h>
void main(){
    int n,i,num1,num2;
    printf("Enter the Number of Elements:");
    scanf("%d",&n);
     int arr[n];
     printf("Enter the %d Elements:",n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     printf("Enter the number to replaced:");
     scanf("%d",&num1);

     printf("Enter the Number to Replacement:");
     scanf("%d",&num2);

     int replaced=0;
     for(i=0;i<n;i++){
        printf("%d",arr[i]);
        }
     for(i=0;i<n;i++){
        if(arr[i]==num2){
          arr[i]=num1;
          printf("%d",i);
          replaced=1;
     }
    }
    if(!replaced){
        printf("Not replaced");
    }
    else{
        printf("\nFinal Array:");
        for(i=0;i<n;i++){
        printf("%d",arr[i]);
        }
    }
}
