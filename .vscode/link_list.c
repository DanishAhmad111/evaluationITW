#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
 void display( struct node* head){
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
 }
void count_nodes(struct node* ptr){
    int count=0;
if(ptr==NULL){
    printf("list is empty");
}
else{
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    printf("number of nodes in the list is %d",count);
}

}

struct node* insert_end(struct node* temp,int data4){
    struct node* ptr;
    ptr=malloc(sizeof(struct node));
    ptr->data=data4;
    ptr->next=NULL;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;

}

struct node* insert_beg(struct node* head,int data0){
struct node* temp;
temp=malloc(sizeof(struct node));
temp->data=data0;
temp->next=head;
return temp;

}


int main(){
    struct node* head;
    struct node* second;
    struct node* three;
    head=malloc(sizeof(struct node));
    second=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));
    int data1,data2,data3,data0;
    scanf("%d",&data0);
    scanf("%d",&data1);
    scanf("%d",&data2);
    scanf("%d",&data3);
    // scanf("%d",&data4);
    head->data=data1;
    head->next=second;
    second->data=data2;
    second->next=three;
    three->data=data3;
    three->next=NULL;
    // display(head);
    // count_nodes(head);
    // insert_end(head,data4);
    head=insert_beg(head,data0);
    display(head);
    return 0;
}