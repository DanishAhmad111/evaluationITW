#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int stack_arr[MAX];
int top=-1;

int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
            return 0;
        }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
 }




void push(int data){
    if(isFull()){
        printf("Stack Overflow");
        return;
    }
    else{
        top=top+1;
        stack_arr[top]=data;
    }

}

int pop(){
    int value;
    if(isEmpty()){
        printf("Stack underflow");
        exit(1);
    }
    else{
        value=stack_arr[top];
        top=top-1;
        return value;
    }

}

int peek(){
    if(isEmpty()){
        printf("Stack Underflow \n");
        exit(1);
    }
    else{
        return stack_arr[top];
    }
}

void print(){
    if(isEmpty()){
        printf("Stack underflow");
       return;
    }
    for(int i=top;i>=0;i--){
        printf("%d",stack_arr[i]);
        printf("\n");
    }
}
void dec_to_binary(int num){
   
   while(num !=0){
      push(num%2);
      num=num/2;
   }
while(top!=-1){
    printf("%d\n",pop());
}

}

int main(){
    // push(1);
    // push(7);
    // push(0);
    // push(4);
    // int data=pop();
    // printf("Popped element is %d\n",data);
    // print();
    // int nTop=peek();
    // printf("Top element is %d\n",nTop);
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    dec_to_binary(num);

return 0;
}