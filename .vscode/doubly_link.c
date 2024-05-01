#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* addtoempty(struct node* head,int data)
{
struct node* temp=malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=data;
temp->next=NULL;
head=temp;
return head;
}

struct node* addtobeg(struct node* head,int item){
    struct node* temp=malloc(sizeof(struct node));
    temp->next=NULL;
    temp->prev=NULL;
    temp->data=item;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}

int main(){
struct node* head=NULL;
head=addtoempty(head,45);

head=addtobeg(head,34);
struct node* ptr;
ptr=head;
while(ptr!=NULL){
    printf("%d",ptr->data);
    ptr=ptr->next;
}
return 0;
}



