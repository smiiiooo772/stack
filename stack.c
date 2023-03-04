//stack implementation using an array......
#include<stdio.h>
int stack[5],top = -1;//global////
void push();
void pop();
void show();
void exit();
void main()
{
int ch;
printf("1.PUSH \n");
printf("2.POP \n");
printf("3.SHOW \n");
printf("4.EXIT \n");
	while(1) //1 means true....
	{
		printf("Enter the choice: \n");
		scanf("%d\n", &ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: show();
				break;
			case 4: exit(0);
				break;
			default:printf("Enter the right choice");
		}
	}	
}
void push()
{
	int item;
	if (top == 5-1)
	{
		printf("Stack is empty!!!");
	}
	else
	{
		printf("enter the element: \n");
		scanf("%d", &item);
		top = top + 1;
		stack[top] = item;
	}
}
void pop()
{
	int i;
	if(top == -1)
	{
		printf("stack is empty!!!");
	}
	else
	{
		printf("Popped item is %d \n", stack[top]);
		top = top - 1; 
	}
}
void show()
{
	int i;
	if(top>=0)
	{
		printf("\n Stack elements are: \n");
		for(i = top; i>=0; i--)
		{
			printf("%d", stack[i]);
		}
	}
	else
	{
		printf("Stack is empty....");
	}
}
