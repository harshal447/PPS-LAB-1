#include <stdio.h>

int main() {
	int choice;
    double num1, num2, result;
    do{    
	    // display  menu options  
	    printf("\n===== Arithmetic  Calcultor=====\n");
	    printf("1. Addition \n");
	    printf("2. subtraction  \n");
	    printf("3. Multiplication   \n");
	    printf("4. Division  \n");
	    printf("5. Exit \n");
	    printf("Enter  your  choice  (1-5):  ");
	    scanf("%d",&choice);
	    
	    // perform operation based  on user  choice 
	    switch(choice) 	{
	        case 1:
	           printf("Enter  two  numbers:");
	           scanf("%1f %1f",& num1, &num2);
	           result = num1 + num2;
	           break;
	           
	        case 2:
			   printf("Enter  two  numbers:");
	           scanf("%1f %1f",& num1, &num2);
	           result = num1 - num2;
	           printf("Result:%.31f  +  %.31f = %.31f\n",num1, num2, result);
	           break;
			   
			case 3:   
			
			    printf("Enter  two  numbers:");
	           scanf("%1f %1f",& num1, &num2);
	           result = num1 * num2;
	           printf("Result:%.31f  +  %.31f = %.31f\n",num1, num2, result);
	           break;
	           
	           case 4:
	           	  printf("Enter two numbers:");
	           	  scanf("%1f %1f",  &num1, &num2);
	           	  if (num2 ==  0) {
					  printf("Error:  Division by  zero is not allowed. \n");
					} else {
						result= num1 / num2;
						printf("Result: %.21f / %.21f =%.21f/n", num1, num2, result); 
						
					}  
					   break;
					case 5:
					   Printf("Existing the program...\n");
					   break;
					default:
					   printf ("Invalid choice please  enter a number  betwwen 1 an ");
	                } else {
	                	result =num1 / num2;
	                	printf("Result: %.21f  / %.21f =  %.21f\n",num1, num2,
	                	
					}
				    break;
				case 5:
				     printf ("Exiting the progarm ... \n");
					 break;
				default:
				    printf("Invalid choice! please entera number between 1 an  5 ");
            					
        }
    }while ( choice != 5); // lopp until the user choose to exit
        
        return 0;
}
