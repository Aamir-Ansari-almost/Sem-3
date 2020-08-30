#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTACK 100
#define POSTFIXSIZE 100

int stack[MAXSTACK];
int top = -1;

void push(int item) {
    if (top >= MAXSTACK-1) {
        printf("OVERFLOW");
        return;
    } else {
        top++;
        stack[top] = item;
    }
}

int pop() {
    int num;
    if (top < 0) {
        printf("UNDERFLOW");
    } else {
        num = stack[top];
        top--;
        return num;
    }
}

void evalPostfix(char postfix[]) {
    int i, a, b, val;
    char ch;

    for(i=0 ; postfix[i]!=')' ; i++) {
        ch = postfix[i];
        if(isdigit(ch)) {
            push(ch-'0');
        } else if(ch=='+' || ch=='-' || ch=='*' || ch=='/') {
            a = pop();
            b = pop();
            switch(ch) {
                case '+':
                    val = b+a;
                    break;
                case '-':
                    val = b-a;
                    break;
                case '*':
                    val = b*a;
                    break;
                case '/':
                    val = b/a;
                    break;
            }
            push(val);
        }
    }
    if (top > 0) {
        printf("Invalid input");
    } else {
        printf("\nResult of given postfix expression is :  %d", pop());
    }
}

int main() {
    int i;
    char postfix[POSTFIXSIZE];
    printf("Enter postfix expression :  ");
    gets(postfix);
    strcat(postfix, ")");
    evalPostfix(postfix);
    return 0;
}











