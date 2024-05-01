#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
} *top=NULL;

int isEmpty(){
    if(top==NULL){
        printf("stack underflow");
        exit(1);
    }
    return 0;
}

int peek(){
    if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
    return top->data;
}
void push(int data){
struct node* newnode = (struct node*)malloc(sizeof(struct node));

if(newnode==NULL){
    printf("stack overflow");
}
else{
    newnode->data=data;
    newnode->next=NULL;
    newnode->next=top;
    top=newnode;
}

}

int pop(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=top;
    int val;
    val=top->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return val;

}
 void print(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=top;
    while(temp){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
 }

void palindrome_check(char* s){
    int i=0;
    while(s[i] !='X'){
        push(s[i]);
        i++;
    }i++;

    while(s[i]!='\0')
    {
    if( isEmpty() || s[i] != pop()){
        printf("Not a plaindrome");
        exit(1);
    }
    i++;

}
 printf("palindrome");
}

int main()

{  
   char s[100];
   printf("please enter the string");
   scanf("%s",s);

    palindrome_check(s);

   return 0;

}
   