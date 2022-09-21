#include<stdio.h>
#include<stdlib.h>
 struct node {
int data;
struct node *next;

 };
  int  search(struct node * head,int key);
 struct node*add_at_last(struct node * head,int num){
     struct node *newnode,*temp;
     newnode = (struct node*)malloc(sizeof(struct node));
     newnode->data = num;
     newnode->next = NULL;
     if(head == NULL){
         head=newnode;
     }
     else{
     temp=head;
     while(temp->next != NULL){
         temp=temp->next;
     }
     temp->next = newnode;
     return head;
 }
 }
 void display(struct node * head){
     struct node *temp;
     temp=head;
     while(temp!= NULL)
     {
         printf(" %d",temp->data);
         temp=temp->next;
     }
     printf("\n");

 }
 struct node * delete_node(struct node *head,int num){
     struct node *temp,*pretemp;
     if(head->data==num){
         head=head->next;
         free(temp);
         temp=head;
     }
     
     else if(search(head,num))
     {
     while((temp->data!=num)&&temp->next!=NULL){
     pretemp=temp;
     temp=temp->next;
     }
     pretemp->next=temp->next;

     free(temp);
     }

     else
     printf("%d not found\n",num);
     return head;

         

 }
 int  search(struct node * head,int key){
     struct node * temp;
     temp=head;
     while((temp->data!=key)&&(temp->next!=NULL)){
         temp=temp->next;
     }
     
     if(temp->data==key)
     return 1;

     else
     return 0;
 }
 int main(){
     struct node *head=NULL;
     head=add_at_last(head,10);
     head=add_at_last(head,20);
     head=add_at_last(head,30);
     head=add_at_last(head,40);
     head=add_at_last(head,50);
     display(head);
     head=delete_node(head,10);
     head=delete_node(head,20);
     head=delete_node(head,50);
     head=delete_node(head,60);
     display(head);

  

     
     return 0;
 }