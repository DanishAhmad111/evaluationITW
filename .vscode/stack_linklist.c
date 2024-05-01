#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
} *top=NULL;

void push(int data){
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
       
    if(newNode==NULL){
        printf("Stack Overflow");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;

    newNode->next=top;
    top=newNode;
}

int pop(){
 struct node* temp;
 temp=top;
 int val;
 val=temp->data;
 top=top->next;
 free(temp);
 temp=NULL;
 return val;
}

void print(){
    struct node* temp;
    temp=top;

    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(73);
    int popped=pop();
    printf(" %d is popped out\n",popped);
print();
}
