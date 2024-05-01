#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void displayList(struct node* node) {
  struct node* last;

  while (node != NULL) {
    printf("%d->", node->data);
    last = node;
    node = node->next;
  }
   printf("NULL\n"); // Print NULL to indicate the end of the list
}




int main() {

struct node* head;
struct node* one=NULL;
struct node* two=NULL;
struct node* three=NULL;


one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));

one->data=18;
two->data=22;
three->data=26;

one->next=two;
two->next=three;
three->next=NULL;

one->prev=NULL;
two->prev=one;
three->prev=two;

head=one;

displayList(head);

}