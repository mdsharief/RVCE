#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1,max;
char a[100][100];
void push();
void pop();
void display();
int main()
{
        int ch;
        printf("\n Enter the number of elements:");
        scanf("%d",&max);
        while(1)
        {
                printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n");
		printf("Enter Your Choice : ");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1: push();
                                break;
                        case 2: pop();
                                break;
                        case 3: display();
                                break;
                        case 4:exit(0);
                        default : printf("Invalid Choice");
                                  break;                }
        }
}
void push()
{
        char item[55];
        if(top==max-1)
                printf("\n STACK OVERFLOW");
        else
        {
		printf("Enter The String To Insert : ");
                scanf("%s",item);
                ++top;
                strcpy(a[top],item);
                printf("\n Element %s is Inserted at Location %d",item,top);
        }
}
void pop()
{
        if(top==-1)
                printf("\n STACK UNDERFLOW");
        else
        {
                printf("\n Popped Element %s is found at Location %d",a[top],top);
                top--;
        }
}
void display()
{
        if(top==-1)
                printf("\n STACK IS EMPTY");
        else
        {
                for(int i=top;i>=0;i--)
                        printf("%s \t",a[i]);
        }
}

