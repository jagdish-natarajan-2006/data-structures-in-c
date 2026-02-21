/*
File: prefix_to_infix.c
Description: Converts a Prefix expression to Infix expression using Stack
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

// Push string onto stack
void push(char *str) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    strcpy(stack[++top], str);
}

// Pop string from stack
char* pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Check if character is operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Convert Prefix to Infix
void prefixToInfix(char *prefix) {
    int len = strlen(prefix);

    for (int i = len - 1; i >= 0; i--) {

        if (isalnum(prefix[i])) {
            char operand[2];
            operand[0] = prefix[i];
            operand[1] = '\0';
            push(operand);
        }
        else if (isOperator(prefix[i])) {
            char op1[MAX], op2[MAX], expression[MAX];

            strcpy(op1, pop());
            strcpy(op2, pop());

            snprintf(expression, MAX, "(%s%c%s)", op1, prefix[i], op2);

            push(expression);
        }
    }

    printf("Infix Expression: %s\n", pop());
}

int main() {
    char prefix[MAX];

    printf("Enter Prefix Expression: ");
    scanf("%s", prefix);

    prefixToInfix(prefix);

    return 0;
}
