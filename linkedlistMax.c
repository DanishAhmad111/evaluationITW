
#include<stdio.h>
#include<stdlib.h>
 

struct Node{
    int data;
    struct Node* next ;
};

void llTraversal(struct Node* ptr){
  int max=ptr->data;
    while(ptr != NULL){
        if(ptr->data >max){
            max=ptr->data;
        }
         
        ptr=ptr->next;
    }
    printf("%d\n",max);
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
    return 0;
   }