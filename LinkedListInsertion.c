#include<stdio.h>
#include<stdlib.h>
 

 struct Node{
    int data;
    struct Node* next ;
 };

void llTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* insertatfirst(struct Node* head,int data){
struct Node* ptr;

ptr=(struct Node*)malloc(sizeof(struct Node));

ptr->next=head;
ptr->data=data;
return ptr;

}
struct Node* insert_at_end(struct Node* head,int data) {
  struct Node*newnode=malloc(sizeof(struct Node));
  newnode->data=data;
  newnode->next=NULL;

    if(head==NULL){
        head=newnode;
    }
    else{
        struct Node*temp=head;
        while( temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        
    }

return head;
}


int main(){

struct Node* head;
struct Node* second;
struct Node* third;

 head=(struct Node*)malloc(sizeof(struct Node))  ;  

 second=(struct Node*)malloc(sizeof(struct Node));

 third=(struct Node*)malloc(sizeof(struct Node)) ; 

head->data=7;
head->next=second;

second->data=10;
second->next=third;

third->data=19;
third->next=NULL;


llTraversal(head);

// head=insertatfirst(head,50);
// llTraversal(head);

head=inset_at_end(head,31);
llTraversal(head);


    return 0;
   }


