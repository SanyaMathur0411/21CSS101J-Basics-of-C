#include <stdio.h>
 main() 

{ printf("RA2211042010042\n");
 
  int number1, number2, temporary_variable;
  printf("\nEnter values for number1 and number2: ");
  scanf("%d%d",& number1,& number2);
  temporary_variable = number1;
  number1= number2;
  number2= temporary_variable;
  printf("\nBefore swap value of number1=%d and number2=%d", number2, number1);
  printf("\nAfter swap value of number1=%d and number2=%d", number1, number2);
} 


