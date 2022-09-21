#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};
struct node *addatbeg(struct node *head,int num)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next =NULL;
    if(head==NULL){
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head =newnode;
    }
        return head;
}
struct node *insert_beg(struct node * head,int num){
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    return head;
}
void display(struct node *head)
{
    struct node * temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    
}
struct node*add_at_end(struct node * head,int num)
{
struct node * temp,*pretemp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
temp=head;
while (temp->next!=NULL){

    temp=temp->next;
}
temp->next=newnode;
return head;


}
 int main(){
     struct node *head=NULL;
     head=addatbeg(head,10);
     head=addatbeg(head,20);
     head=addatbeg(head,30);
     head=addatbeg(head,40);
     display(head);
     head=add_at_end(head,60);
     printf("\n");
     display(head);
     return 0;
 }
