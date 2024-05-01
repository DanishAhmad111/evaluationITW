#include<string.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
int top=-1;
char stack[MAX];

int match_char(char a, char b){
    if(a=='[' && b==']')
    return 1;
}


int check_balanced(char* s){
    char temp;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('|| s[i]=='{' || s[i]=='['){
            push(s[i]);
        }
        if(s[i]==')'|| s[i]=='}' || s[i]==']'){
            if(isEmpty()){
                printf("right brackets are more");
                return 0;
            }
            else{
                temp=pop();
                if(!match_char(temp,s[i])){
                    printf("Mismatched brackets\n");
                    return 0;
                }
            }
        }
    }
    if(isEmpty()){
        return 1;
    }
    else{
        printf("left brackets are more");
        return 0;
    }
}


int main(){
    char expr[MAX];
    int balanced;
    printf("enter the algebraic expression");
    gets(expr);
    balanced=check_balanced(expr);
    if(balanced==1){
        printf("expression is well balaced");
    }
    else{
        printf("not valid");
    }

    return 0;

}