
#include <math.h>
#include<stdio.h>

int main()
 {
   int num,  n = 0;
   float result = 0.0;

   printf("Enter an number: ");
   scanf("%d", &num);

   int originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum= originalNum/10;
   }
    int remainder;
   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result = result+pow(remainder, n);
   }
    int k=result
   // if num is equal to result, the number is an Armstrong number
   if (k== num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}