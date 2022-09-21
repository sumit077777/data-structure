#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int val)
{
    //Task 1: Correct the below logic
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode; 
         rear=newNode;
    }
}

int dequeue()
{
    struct node *temp;
    if(front==NULL&&rear==NULL){
        return -1;
    }
    else
    temp=front;
    front =front->next;
    if(front==rear){
        rear=NULL;
    }
    return temp->data;
    free(temp);
}
void display(){
    struct node * temp;
    temp=front;
    while (temp!=rear->next)

    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("\n");
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());

    return 0;
}