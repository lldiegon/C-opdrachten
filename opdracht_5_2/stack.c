#include <stdio.h>
#include <assert.h>
#include "stack.h"
void init_stack(Stack* ps)
{
        ps->top = -1;
}
void push(Stack* ps, int data)
{
    assert(ps->top < STACKSIZE-1);
    (ps->top)++;
    ps->a[ps->top] = data;
}
int pop(Stack* ps)
{
    assert(ps->top > -1 );
    int data = ps->a[ps->top];
    ps->top -= 1;
    return data;
}
void show(Stack s)
{
    printf("inside top = %d \n", s.top);
    if (s.top > -1) {
        printf("%c", (s.a)[s.top]);
        for (int i = (s.top)-1 ; i > -1; i--){
            printf("->%c", s.a[i]);
        }
        putchar('\n');
    } else {
    puts("empty stack");
    }
}

int topvalue(Stack s){
    return s.top;
}

int showtop(Stack s){
    int data;
    if (s.top > -1){
        data = (s.a)[s.top];
        return data;
    }
    else{
        return 0;
    }
    
}