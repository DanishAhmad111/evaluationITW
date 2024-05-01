#include<stdio.h>
#include<stdlib.h>

#define MAX 6
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
    if((rear+1)%MAX == front){
        printf("queue is full\n");
        return;
    }
    else if(front==-1){
        front=rear=0;
    }
    else{
        rear=(rear+1)%MAX; 
        queue[rear]=data;
    }
}

void dequeue(){
    if(front==-1){
        printf("underflow");
    }
    else if(front==rear){
        int item;
         item=queue[front];
         printf("deleted item is %d\n",item);
        front=rear=-1;
    }
    else{
        int item;   
        item=queue[front];
        printf("deleted item is %d\n",item);
        front=(front+1)%MAX;
    }
}

void display(){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    printf("Queue elements: ");
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue[rear]);
}

int main(){

    enqueue(2);
    enqueue(98);
    enqueue(44);
    enqueue(31);
    enqueue(22);
    display();
    dequeue();
    display();
    return 0;
}
