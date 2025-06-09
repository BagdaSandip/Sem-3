#include<stdio.h>
void main(){
    char c;
    printf("enter the character:");
    scanf("%s",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("Character is vowel");   
    }
    else{
        printf("Character is consonant");
    }
}