#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;

void enqueue(item){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    if(front==NULL){
        temp->next=NULL;
        temp->data=item;
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
        temp->data=item;
        rear->next=NULL;

    }
}

void dequeue(){
    if(front==NULL){
        printf("underflow");
    }
    else{
        struct node* ptr;
        ptr=front;
        front=front->next;
        printf("element deleted is %d\n",ptr->data);
        free(ptr);
    }
}

void display(){
    struct node* ptr;
    for(ptr=front;ptr!=NULL;ptr=ptr->next){
        printf("%d\n",ptr->data);
    }

}

int main(){
    enqueue(23);
    enqueue(90);
    enqueue(12);
    enqueue(10);
    enqueue(100);
    display();
    dequeue();
    display();
}

