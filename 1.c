#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
}*head;
int main(){
struct node *temp,*NewNode,*firstnode;
int n,data;
printf("enter no of nodes:");
scanf("%d",&n);
head=(struct node*)malloc(sizeof(struct node));
printf("enter the value for node1:");
scanf("%d",&data);
head->data=data;
head->link=NULL;
temp=head;
for(int i=2;i<=n;i++){
    NewNode=(struct node*)malloc(sizeof(struct node));
    if( NewNode==NULL){
        printf("memory not allocated");
        exit(1);
        }
        printf("enter data for node%d:",i);
        scanf("%d",&data);
        NewNode->data=data;
        NewNode->link=NULL;
        temp->link=NewNode;
        temp=temp->link;
    }
    temp=head;
    
    printf("enter the value of node to be inserted at first:");
    scanf("%d",&data);
    firstnode=(struct node *)malloc(sizeof(struct node));
    firstnode->data=data;
    firstnode->link=head;
    head=firstnode;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->link;
    }

    return 0;

}
