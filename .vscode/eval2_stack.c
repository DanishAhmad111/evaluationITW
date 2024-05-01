#include<stdio.h>
#include<stdio.h>

struct node{
    int data;
    struct node* next;
} *top=NULL;

int push(int item){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Stack Overflow\n");
        exit(1);
    }
    newnode->data=item;
    newnode->next=NULL;

    newnode->next=top;
    top=newnode;
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
        printf("%d\n,temp->data");
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    push(23);
    print();
    int popped=pop();
    printf("%d, popped element is");


}