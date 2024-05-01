#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
char stack[MAX]; char infix[MAX];
char postfix[MAX];
int top=-1;

void in_to_post(){
    int j=0;
    char symbol;
    char next;
    for(int i=0;i<strlen(infix);i++){
        symbol=infix[i];
        switch(symbol){
            case '(':
                push(symbol);
                break;
            case ')':
                while(next =pop() != '('){
                    postfix[j++]=next;
                }
                break;
                
        }

    }

}


int main(){
    printf("enter infix expression");
    gets(infix);

    in_to_post();
    print();
    return 0;
}


