#include<stdio.h>
struct node {
    int data ;
    struct node *link;
}*head;
struct node *add_at_end(struct node * ptr, int data){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
int main(){

}