#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* next;
    int data;
};

struct node* addtoempty(int item)
{
struct node* temp;
temp=malloc(sizeof(struct node));
temp->data=item;
temp->next=temp;
return temp;

}

struct node* addatbeg(struct node* tail,int item)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=tail->next;
    tail->next=newnode;
    return tail;
}

struct node* addafterpos(struct node* tail,int item,int index)
{
  struct node* p;
  p=tail->next;
  int i=0;
  while(i!=index-1){
    p=p->next;
    i++;
  }
  struct node* newnode=malloc(sizeof(struct node));
  newnode->data=item;
  newnode->next=p->next;
  p->next=newnode;
return tail;
}


void print(struct node* tail){
    struct node* p=tail->next;
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=tail->next);
}

int main(){
    struct node* tail;
    tail=addtoempty(45);
    tail=addatbeg(tail,36);
    tail=addafterpos(tail,40,1);
    print(tail);
}