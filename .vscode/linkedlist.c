#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printll(struct node*p){
    while(p !=NULL){
        printf("%d \t",p->data);
        p=p->next;
    }

}


int main(){
struct node*head;
struct node* one =NULL;
struct node* two=NULL;
struct node* three=NULL;

one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));

one ->data=3;
two -> data=4;
three->data=65;

one->next=two;
two->next=three;
three->next= NULL;

head=one;
printll(head);


return 0;
}