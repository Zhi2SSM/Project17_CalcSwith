#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	
	while (1)
	{
		char ch;
		int a = 0;
		int b = 0;
		printf("Give me a number :  ");
		if (scanf("%d", &a) != 1) { while (getchar() != '\n'); continue; }
		printf("Give me another number :  ");
		if (scanf("%d", &b) != 1) { while (getchar() != '\n'); continue; }
		printf("Gave me a operator:(+,-,*,/)or 'q' to quit: ");
		scanf(" %c", &ch);
		if(ch=='q')
			break;
		switch (ch)
		{
		case '+':
			printf("%d+%d=%d\n", a, b, a + b);
			break;
		case '-':
			printf("%d-%d=%d\n", a, b, a - b);
			break;
		case'*':
			printf("%d*%d=%d\n", a, b, a * b);
			break;
		case'/':
			if (b == 0)
			{
				printf("Error: Division by zero is not allowed.\n");
				break;
			}
			else
			{
				printf("%d/%d=%d\n", a, b, a / b);
				break;
			}
		default:
			printf("Error: Invalid operator. Please enter a valid operator (+, -, *, /) or 'q' to quit.Try again:\n");
			break;
		}
	}
	printf("Bye\n");
	return 0;
}