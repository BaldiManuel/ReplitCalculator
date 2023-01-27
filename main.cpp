// Plantilla de un Menú de Opciones

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int option;
    char repeat = TRUE;
    
    do {
        system("cls");
        
        printf("\n\n\t\t\t|Replit Calculator|\n");
        printf("\t\t\t-------------------\n");
        printf("\n\t1. Add two numbers\n");
        printf("\t2. Subtract two numbers\n");
        printf("\t3. Multiply two numbers\n");
        printf("\t4. Divide two numbers\n");
        printf("\t0. Quit\n");
        
        printf("\n\tEnter an option: ");
        scanf("%d", &option);
        
        int number1, number2;
		float result;
        switch (option) {
            case 1:
                printf("\n\tEnter first number: ");
                scanf("%d", &number1);
                
                printf("\tEnter second number: ");
                scanf("%d", &number2);
                
                printf("\t---------------------------\n");
                result = number1 + number2;
                printf("\tResult: %f\n", result);
                
                system("pause>nul");
                break;
                
            case 2:
                printf("\n\tEnter first number: ");
                scanf("%d", &number1);
                
                printf("\tEnter second number: ");
                scanf("%d", &number2);
                
                printf("\t---------------------------\n");
                result = number1 - number2;
                printf("\tResult: %f\n", result);
                
                system("pause>nul");
                break;
                
            case 3:
                printf("\n\tEnter first number: ");
                scanf("%d", &number1);
                
                printf("\tEnter first number: ");
                scanf("%d", &number2);
                
                printf("\t---------------------------\n");
                result = number1 * number2;
                printf("\tResult: %f\n", result);
                
                system("pause>nul");
                break;
                
			case 4:
                printf("\n\tEnter first number: ");
                scanf("%d", &number1);
                
                printf("\tEnter second number: ");
                scanf("%d", &number2);
                
                printf("\t---------------------------\n");
                
				if (number2 == 0) {
                	printf("\tResult: Cannot divide by zero.\n"); 
				} else {
					result = number1 / (number2* 1.0);
					printf("\tResult: %f\n", result);
				}
                
                system("pause>nul");     
                break;
            
            case 0:
            	repeat = FALSE;
            	break;
        }        
    } while (repeat);
    return 0;
}
