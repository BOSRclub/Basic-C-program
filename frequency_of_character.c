#include<stdio.h>
int main(){
    int number,i,k;
    int mul;
    printf("Enter a number to print its multiplication table \n ");
    scanf("%d",&number);
    printf(" Upto which you want to print its multiplication ?");
    scanf("%d",&k);

    for(i=1; i<=k;i++){
          mul= number*i;
          printf("%d * %d = %d \n  ",number,i,mul);

    } 
    return 0;

}