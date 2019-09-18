#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int main()
{
	int item,ch,i;
	int queue[max_size];
	int front=0;
	int rear=0;
	int exit=1;
	do
	{
		printf("\n 1.Q_Insert\n 2.Q_Delete\n 3.Q_Display\n others to delete\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://Queue Insert
				if(rear==max_size)
					printf("\n Queue Reached Maxed\n");
				else
				{
					printf("Enter The Item To Be Inserted : \n" );
					scanf("%d",&item);
					printf("\n\n##Position : %d , Inserted value : %d\n",rear+1,item);
					queue[rear++]=item;
				}
				break;
			case 2://Queue Delete
				if(front==rear)
					printf("Queue Is Empty");
				else
				{
					printf("\n\n ##Position : %d , Deleted Value : %d \n",front,queue[front]);
					front++;
				}
				break;
			case 3://Queue Display
				printf("Queue Elements Are : \n");
				if(front==rear)
					printf("Omg!! There Are No Elements!!");
				else
				{
					for(i=front;i<rear;i++)
						printf("\n\n ##Position : %d , Values : %d \n",i,queue[i]);
					printf("\n");
				}
				break;
				default:exit=0;
				break;
	}
}
while(exit);
	return 0;
	}
