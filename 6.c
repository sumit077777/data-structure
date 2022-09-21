#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *insert_beg(struct node * head,int num){
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    return head;
}
void display(struct node * head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct node * insert_end(struct node * head,int num){
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    struct node * temp;
    newnode->data=num;
    newnode->next=NULL;
    temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newnode;
    return head;
        
}
struct node * insert_before(struct node *head ,int num){
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    struct node * temp,*pretemp;

    newnode->data=num;
    int data;
    printf("enter num before which node to insert:");
        scanf("%d",&data);
    
temp=head;
    while(temp->data!=data){
        pretemp=temp;
        temp=temp->next;
    }
    newnode->next=temp;
      pretemp->next=newnode;
    return head;

}
struct node * insert_after(struct node * head,int num){
    struct node * temp,*newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    printf("enter num to be inserted after:");
    scanf("%d",&data);
    temp=head;
    while(temp->data!=data){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;

}
struct node *delete_beg(struct node *head){
    struct node*temp;
    temp=head;
    if(head==NULL){
        printf("list is empty\n");
        exit(0);
    }
    else
    head=head->next;
    printf("popped element is %d\n",temp->data);
    free(temp);
    return head;

}
struct node * delete_end(struct node * head){
    struct node *temp,*pretemp;
    temp=head;
    while(temp->next!=NULL){
        pretemp=temp;
        temp=temp->next;
    }
    pretemp->next=NULL;
    printf("deleted element is %d\n", temp->data);
    free(temp);
    return head;
}
struct node * delete_before(struct node * head){
    struct node *temp,*pretemp;
    temp = head;
    int data;
    printf("enter the number which node to be deleted:");
    scanf("%d",&data);
    while(temp->data!=data){
        pretemp =temp;
        temp=temp->next;
    
    }
    pretemp->next=temp->next;
    printf("popped element is %d\n",temp->data);
    free(temp);
    return head;

}


int main(){
    struct node *head=NULL;
   head=insert_end(head,11);
   head= insert_end(head,12);
   head=insert_end(head,13);
   head=insert_end(head,14);
   head=insert_end(head,15);
   head=insert_end(head,16);

   display(head);
   
    return 0;
}