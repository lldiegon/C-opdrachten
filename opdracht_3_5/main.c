#include <stdio.h>

void verschuif_cyclisch (unsigned char *nummer2, int n);

void bitprint(char ch){
    for(int i = 0; i < 8; i++){
        if(ch & 0x80) { //checkt meest linkse bit
            putchar('1');
        } else {
            putchar('0');
        }
        ch <<= 1; //schuift 1 positie naar links
    }
    putchar('\n');
}

int get_bit(char ch, int n){
int bit = 0;
 
for(int i = 0; i <= n; i++) {
        if(ch & 0x80) {
            bit = 1;
        } else {
bit = 0;
        }
        ch <<= 1;
    }
return bit;
}

void verschuif_cyclisch (unsigned char *nummer2, int n){
    unsigned char LBIT = 0x80; //1000 0000 mask
    unsigned char RBIT = 0x01; //0000 0001 mask
    int counter;
 
 
    if (n >= 0){
        for (counter = 0; counter < n ;counter++)
        {
            if (LBIT & *nummer2)
            {
                *nummer2 <<= 1; 
                *nummer2 += 1; //+1 optellen
            }
            else
                *nummer2 <<= 1; 
        }
    }
    else
    {
        /* als n < 0 dan */
        for (counter = 0; counter < -n ;counter++)
        {
            if (RBIT & *nummer2)
            {
                *nummer2 >>= 1;
                *nummer2 += 128;
            }
            else
                *nummer2 >>= 1;
        }
    }
}


int main(int argc, char **argv){
	int index,index2;
	char nummer = 10;
	unsigned char nummer2 = 10;
	printf("Het binaire getal is: ");
	bitprint(nummer);
	 
	printf("\nKies een index (0-7) van de byte om te tonen: ");
	scanf("%d",&index);
	int bit = get_bit(nummer, index);
	printf("\nHet gekozen bit is: %d",bit);
	 
	printf("\nHoeveel posities en in welke richintg wil je de byte schuiven?\n(-1 = 1 rechts, 1 = 1 links):  ");
	scanf("%d",&index2);
	verschuif_cyclisch(&nummer2,index2);
	printf("Verschoven binair getal:");
	bitprint(nummer2);

return 0;
}