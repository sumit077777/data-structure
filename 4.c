//c program to insert node at the end of the list//
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*head;
int main(){
int data,n;
struct node *newnode,*temp;
printf("enter no of nodes:");
scanf("%d",&n);
printf("enter data of data node1:");
scanf("%d",&data);
head=(struct node*)malloc(sizeof(struct node));
head->data = data;
head->link=NULL;
temp=head;
for(int i=2;i<=n;i++){
newnode =(struct node *)malloc(sizeof(struct node));
printf("enter data of node%d:",i);
scanf("%d",&data);
newnode->data = data;
newnode->link=NULL;
temp->link=newnode;
temp=temp->link;
}
temp=head;
struct node *EndNod=malloc(sizeof(struct node));
printf("enetr data for end node");
scanf("%d",&data);
EndNod->data = data;
EndNod->link=NULL;
head=temp;
while (temp!=NULL&&temp->link!=NULL)
{
    temp=temp->link;
}
temp->link=EndNod;
temp=head;

while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;
}
return 0;
}

