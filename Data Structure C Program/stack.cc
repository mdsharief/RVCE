#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
int top=-1;
int s[MAX];
main()
{
	int ch;
	printf("\n MENU \n ====================== \n 1.Push \n 2.Pop \n 3.Display \n 4.Exit \n ");
	while(1)
{
	printf("\n Enter Your Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : push();
				break;
		case 2 : pop();
				break;
		case 3 : display();
				break;
		case 4 : exit(1);
		default :printf("\n Oops!! Invalid Input \n");
				//break;
	}
}
}
push()
{
	int item;
	if(top==(MAX-1))
	{
		printf("\n Oops!! Stack Overflow \n");
	}
	else
	{
		printf("\n Enter the item to be pushed in stack:");
		scanf("%d",&item);
		top=top+1;
		s[top]=item;
	}
}
pop()
{
	if(top==-1)
	{
		printf("\n Oops!! Stack Underflow \n");
	}
	else
	{
		printf("\n Popped Elements is %d",s[top]);
		top=top-1;
	}
}
display()
{
	int i;
	if(top==-1)
	{
		printf("\n Oops!! Stack is Empty \n");
	}
	else
	{
		printf("\n Stack Elements Are: \n");
		for(i=top;i>=0;i--)
		printf("\t %d",s[i]);
	}
}

