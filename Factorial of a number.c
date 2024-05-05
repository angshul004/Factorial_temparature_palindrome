#include <stdio.h>
//Video explanation: https://youtu.be/5G0Cw0YxnpA

int main() {
  	int number, factorial = 1;
	char c;
  	printf("Factorial Calculator\n=====================\n\n");
  
  	do{
  	printf("Enter a non-negative integer: ");
  	scanf("%d", &number);
  	if (number < 0) {
    	printf("Factorial is not defined for negative numbers.\n");
  	} 
	else {
    	for (int i = 1; i <= number; ++i) {
      		factorial *= i;
    	}
    printf("Factorial of %d is %d\n", number, factorial);
  	}
  	printf("Do you want to continue? (y/n):\n");
  	scanf(" %c",&c);
  	}while(c=='Y' || c=='y');
  	
return 0;
}
