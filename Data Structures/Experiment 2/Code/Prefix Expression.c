#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTACK 100
#define PREFIXSIZE 100

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

void evalPrefix(char prefix[]) {
    int i, a, b, val;
    char ch;

    for(i=0 ; prefix[i]!=')' ; i++) {
        ch = prefix[i];
        if(isdigit(ch)) {
            push(ch-'0');
        } else if(ch=='+' || ch=='-' || ch=='*' || ch=='/') {
            a = pop();
            b = pop();
            switch(ch) {
                case '+':
                    val = a+b;
                    break;
                case '-':
                    val = a-b;
                    break;
                case '*':
                    val = a*b;
                    break;
                case '/':
                    val = a/b;
                    break;
            }
            push(val);
        }
    }
    if (top > 0) {
        printf("Invalid input");
    } else {
        printf("\nResult of given prefix expression is :  %d\n\n", pop());
    }
}

int main() {
    int i;
    char prefix[PREFIXSIZE];
    printf("Enter prefix expression :  ");
    gets(prefix);
    strrev(prefix);
    strcat(prefix, ")");
    evalPrefix(prefix);
    return 0;
}







