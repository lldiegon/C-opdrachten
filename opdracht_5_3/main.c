#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include <stdbool.h>

Queue queue = {{0},-1,-1};

int main(int argc, char **argv)
{
    bool loop = true;
    while (loop){
        int keuze = 0;
        printf("1. Toevoegen aan queue\n");
        printf("2. Verwijderen van queue \n");
        printf("3. Alle waardes van queue \n");
        printf("4. Stoppen \n");
        scanf("%d", &keuze);
        
        if (keuze == 1){
            int data;
            printf("Wat wil je toevoegen aand de queue? \n");
            scanf("%d", &data);
            enqueue(&queue, data);
        }
        else if (keuze == 2){
            int verwijderd = dequeue(&queue);
            printf("%d is verwijderd \n", verwijderd);
        }
        else if (keuze == 3){
            show(queue);
        }
        else if(keuze == 4){
            loop = false;
        }
        else{
            printf("Geen geldige invoer, probeer opnieuw");
        }
        
    }
    
}