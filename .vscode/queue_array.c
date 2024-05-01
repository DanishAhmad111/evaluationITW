#include<stdio.h>
#include<stdlib.h>

#define Max 5
int queue[Max];
int front = -1;
int rear = -1;

void insert(int data){
    if(rear == Max-1){
        printf("Queue is full\n");
        return;
    }
    else if(rear==-1 && front==-1){
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=data;
    

}
void delete(){
    if(front==-1 && rear==-1){
        printf("Underflow Condition");
        exit(1);
    }
    else{
        int temp=queue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
           
            front=front+1;
        }
        printf("%d\n is deleted value\n",temp);
    }

}

void display(){
    if(front==-1 && rear==-1){
        printf("queue empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf(" %d\n",queue[i]);
        }
    }
}

int main(){
    insert(23);
    insert(65);
    insert(49);
    display();
    delete();
    delete();
    insert(100);
    display();


}
