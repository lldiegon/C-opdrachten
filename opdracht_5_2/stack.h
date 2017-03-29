#ifndef _STACK_H
#define _STACK_H
#define STACKSIZE 100
typedef struct {
    char a[STACKSIZE];
    int top;
} Stack;

void init_stack(Stack* ps);
void push(Stack* ps, int data);
int pop(Stack* ps);
void show(Stack s);
int showtop(Stack s);
int topvalue(Stack s);
#endif /* _STACK_H */