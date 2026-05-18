# include <stdio.h>

int main() {
	
	int num1, num2,add,sub,mul;
	float div;
	printf("enter two integer");
	scanf("%d", &num1, & num2);
	// addition
	add = num1 + num2;
	sub = num1 - num2;
	mul = num1* num2;
	div = num1/ num2;
	printf("\n %d + %d= %d", num1,num2,add);
	printf("\n %d - %d= %d", num1,num2,sub);
	printf(" \n %d * %d= %d", num1,num2,mul);
	printf("\n %d / %d= %d", num1,num2,div);
	return 0 ;

}
