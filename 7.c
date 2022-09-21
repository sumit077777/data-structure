#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int deque[MAX];
int left = -1, right = -1;
void input_deque(void);
void output_deque(void);
void insert_left(void);
void insert_right(void);
void delete_left(void);
void delete_right(void);
void display(void);
void insert_right()
{
    int val;
    printf("\n enter the value to be added:");
    scanf("%d", &val);
    if ((left == 0 && right == MAX - 1) || (left == 0 && right + 1))
    {
        printf("overflow\n");
        return;
    }
    if (left == -1)
    {

        left = 0;
        right = 0;
    }
    else
    {
        if (right == MAX - 1)
        {
            right = 0;
        }
        else
            right = right + 1;
    }
    deque[right] = val;
}
void insert_left()
{
    int val;
    printf("\n enter the value to be added:");
    scanf("%d", &val);
    if ((left == 0 && right == MAX - 1) || (left == 0 && right + 1))
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (left == 0)
        {
            left = MAX - 1;
        }
        else
            left = left - 1;
    }
    deque[left] = val;
}
void delete_left()
{
    if (left == -1)
    {
        printf("underflow\n");
        return;
    }
    printf("deleted element is :%d", deque[left]);
    if (left == right)
    {
        left = -1;
        right - 1;
    }
    else
    {
        if (left == MAX - 1)
        {
            left = 0;
        }
        else
            left = left + 1;
    }
}

void delete_right()
{
    if (left == -1)
    {
        printf("underflow\n");
        return;
    }
    printf("delted element is :%d", deque[right]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (right == 0)
        {
            right = MAX - 1;
        }
        else
            right = right - 1;
    }
}
void display()
{
    int front = left, rear = right;
    if (front == -1)
    {
        printf("\nqueue is empty");
        return;
    }
    printf("\n the element of the queue are: ");
    if (front <= rear)
    {
        while (front <= rear)
        {
            printf("%d", deque[front]);
            front++;
        }
    }
    else
    {
        while (front <= MAX - 1)
        {
            printf("%d", deque[front]);
            front++;
        }
        front = 0;
        while (front <= rear)
        {
            printf("%d", deque[front]);
            front++;
        }
    }
    printf("\n");
}
int main(){
    int option;
    printf("\n1.input restricted deque");
    printf("\n2.output restricted deque");
    printf("\nenter your option: ");
    scanf("%d",&option);
    switch (option){
        case 1:
        input_deque();
        break;
        case 2:
        output_deque();
        break;

    }
return 0;
}
 void input_deque(){ 
     int option;
     do
    {
         printf("****INPUT RESTRICTED DEQUE****");
         printf("\n1.insert at right");
         printf("\n2.delete at left");
         printf("\n3.delete at right");
         printf("\n4.display");
         printf("\n5.quit");
         printf("\n enter your option");
         scanf("%d", &option);
         switch (option)
         {
             case 1:
             insert_right();
             break;
             case 2:
             delete_left();
             break;
             case 3:
             delete_right();
             break;
             case 4:
             display();
             break;

        }
         
              
    }while(option!=5);
 }
 void output_deque()
 {
     int option;
     do
    {
         printf("****OUTPUT RESTRICTED DEQUE****");
         printf("\n1.insert at right");
         printf("\n2.insert at left");
         printf("\n3.delete from left");
         printf("\n4.display");
         printf("\n5.quit");
         printf("\n enter your option");
         scanf("%d", &option);
         switch (option)
        {
             case 1:
             insert_right();
             break;
             case 2:
             insert_left();
             break;
             case 3:
             delete_left();
             break;
             case 4:
             display();
             break;

        }

    }while(option!=5);

     
 }