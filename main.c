#include <stdio.h>
#include "stack.h"

int main() 
{
	int repeat, choice, element, multElement, x;
	Stack s = create();
	
	do
	{
		printf("STACK MENU\n[1] Push\n[2] Pop\n[3] Empty\n[4] Clear\n[5] Top\n[6] Display\nChoice: ");
		scanf("%d", &choice);
		
		system("cls");
		
		switch(choice)
		{
			case 1:
				system("cls");
				
				do
				{
					printf("Push (element): ");
					scanf("%d", &element);
					s = push(s, element);
					
					printf("Push again? (1 = YES | 0 = NO): ");
					scanf("%d", &multElement);
				}
				while(multElement == 1);	
						
				break;
			case 2:
				system("cls");
				
				do
				{
					pop(s);
					
					printf("Element popped.\nPop again? (1 = YES | 0 = NO): ");
					scanf("%d", &multElement);
				}
				while(multElement == 1);	
				
				break;
			case 3:
				system("cls");
				printf("Is stack empty?: %s", isEmpty(s) ? "Yes" : "No");
				break;
			case 4:
				clear(s);
				printf("Stack cleared.");
				break;
			case 5:
				printf("Top: %d", top(s));
				break;	
			case 6:
				system("cls");
				display(s);
				break;
			default:
				printf("Invalid choice.\n");
				break;
		}
		
		printf("\nDo you wish to go back to menu? (1 = YES | 0 = NO): ");
		scanf("%d", &repeat);
		
		system("cls");
	}
	while(repeat == 1);
	
	return 0;
}
