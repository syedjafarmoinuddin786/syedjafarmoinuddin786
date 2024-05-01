// PERFORMING OPERATIONS ON DEqueue using arrays
#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int front=-1;
int rear=-1;
int queue[MAX];
// DECLARE THE SUBFUNCTIONS THAT ARE TO BE USED
void enqueue_front(int);
void enqueue_rear(int);
void dequeue_front();
void dequeue_rear();
void display();
// MAIN FUNCTION
int main(){       
	int entry,choice;
        while(1){
                printf("\n^^^^^^^^^^MENU^^^^^^^^^^\n");
                printf("1.ENQUEUE-FRONT\n");
                printf("2.ENQUEUE-REAR\n");
                printf("3.deQUEUE-FRONT\n");
                printf("4.deQUEUE-REAR\n");
                printf("5.DISPLAY\n");
                printf("6.EXIT\n");
                printf("Enter your choice :\n");
                scanf("%d",&choice);
                // USE THe SWITCH FUNTION AND CREATE THE USER FRIENLDY INTERFACE
                switch(choice){
                        case 1:printf("ENTER THE ELEMENT THAT TO BE INSERTED:\n");
                               scanf("%d",&entry);
                               enqueue(entry);
                               break;
                        case 2:dequeue();
                               break;
                        case 3:display();
                               break;
                        case 4:exit(0);
                               break;
                       default:printf("INVALID CHOICE \n ");
                                  
                }        
        }
       
}
void insert_front()
{
	if(front==(rear+1)%MAX);
		printf("QUEUE IS FULL \n");
	else if(front==-1)	


}