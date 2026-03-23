#include <stdio.h>
int main() {
	int number1, number2, sum;
	printf("Enter first integers:");
	scanf("%d", &number1 );
	
	printf("Enter  integers:");
	scanf("%d", &number2 );
   	//calculation 
	sum = number1 + number2;
	printf("%d + %d = %d", number1, number2, sum);
	return 0;  
	
}

