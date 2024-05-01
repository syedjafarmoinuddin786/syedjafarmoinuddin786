#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int front=-1;
int rear=-1;
int queue[MAX];
// DECLARE THE SUBFUNCTIONS THAT ARE TO BE USED
void enqueue(int);
void dequeue();
void display();
// MAIN FUNCTION
int main(){       
	int entry,choice;
        while(1){
                printf("\n^^^^^^^^^^MENU^^^^^^^^^^\n");
                printf("1.ENQUEUE\n");
                printf("2.deQUEUE\n");
                printf("3.DISPLAY\n");
                printf("4.EXIT\n");
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
void enqueue(int entry){
	if(rear==MAX-1)
		printf("QUEUE IS FULL\n");
	else{
		queue[++rear]=entry;
		if(front==-1)
			front=0;
  	}		
	
}	
void dequeue()
{
	if(front==-1)
		printf("QUEUE IS EMPTY;\n");
	else{
		printf("DELELTED ELEMENT:%d\n",queue[front]);
		if(front==rear)
			front=rear=-1;
		else
		 	front++;	
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("QUEUE IS EMPTY\n");
	else
	{
		printf("QUEUE CONTENT IS :\n");
		for(i=front;i<=rear;i++)
			printf("%d\n",queue[i]);
	}	
}