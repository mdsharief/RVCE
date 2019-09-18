#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 3

int main() {
    int item, choice, i;
    int queue[MAX_SIZE];
    int rear = -1;
    int front = -1;
    int exit = 1;

    do {
        printf("\n\n Queue Main Menu");

        printf("\n1.Q_Insert \n2.Q_Delete \n3.Q_Display \nOthers to exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1://QUEUE INSERT
                if (front==(rear+1)%MAX_SIZE)
                    printf("\n## Queue Reached Max!!");
                else {
                    printf("\nEnter The Value to be Insert : ");
                    scanf("%d", &item);
                    printf("\n## Position : %d , Insert Value  : %d ", rear + 1, item);
		    rear=((rear+1)%MAX_SIZE);
                    queue[rear] = item;
                }
                break;
            case 2://QUEUE DELETE
                if (front == rear)
                    printf("\n## Queue is Empty!");
                else {
                    printf("\n## Position : %d , Deleted Value  : %d ", front, queue[front]);
                    front=(front+1)%MAX_SIZE;
                }
                break;
            case 3://QUEUE DISPLAY
                 printf("\n Queue Elements are:\n ");
            if(front==rear)
		    printf("\n OMG!! There is no element in queue!\n");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("\n## Position : %d , Value  : %d ", i, queue[i]);
                    printf("\n");
		}
	    }
            break;
            default:
                exit = 0;
                break;
        }
    } while (exit);

    return 0;
}

