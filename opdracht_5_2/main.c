#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main(void)
 {
        char c[4];
        Stack stack = {{0},-1};
        puts("Voer een haakje in: ");
        fgets(c, 5 , stdin);
        int val = topvalue(stack);

    for (int i = 0; i < 4; i++) {
        printf("top = %d \n", val);
        if ((!(c[i] == '(' || c[i]  == '[' || c[i]  == '{' || c[i]  == '<')) && i == 0){
            puts("Het openingshaakje is incorrect!");
            return 0;
        }
        else if((c[i]==')' || c[i] == ']' || c[i] == '}' || c[i] == '>') && i > 0){
            if (showtop(stack) > 0){
                if (showtop(stack) == '(' && c[i] == ')' ){
                    pop(&stack);
                }
                else if (showtop(stack) == '[' && c[i] == ']' ){
                    pop(&stack);
                }
                else if (showtop(stack) == '{' && c[i] == '}' ){
                    pop(&stack);
                }
                else if (showtop(stack) == '<' && c[i] == '>' ){
                    pop(&stack);
                }
                
            }
            else {
                puts("De stack is leeg, geen geldige expressie!");
                return 0;
            }
        }
        else{
            push(&stack, c[i]);
            printf("push(%c):", c[i]);
        }
        show(stack);
        val = topvalue(stack);
    
    }
     if (val > 0 ){
            puts("Dit is geen geldige expressie");
            return 0;
    }
    else{
        puts("Dit is een geldige expressie");
        return 0;
    }
    return 0;
}