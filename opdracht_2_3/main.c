#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char x[80];
	printf("--- Met indices --- \n");
	printf("Tik tekst in: ");
	fgets(x,80,stdin);
	if (x[strlen(x)-1] == '\n' && !isalpha(x[0])){
		printf("Ingevoerde zin is niet geldig!");
	}else{
		x[strlen(x)-1] = '\0';
		int backup_x;
		int x_start = 0;
		int x_eind = strlen(x)-1;
		while (x_start < x_eind)
		{
			backup_x = x[x_start];   
			x[x_start] = x[x_eind];
			x[x_eind] = backup_x;
			x_start++;
			x_eind--;
		}  
		printf("In omgekeerde volgorde: %s",x);
	
		printf("\n\n--- Met pointers ---\n");
	
		char y[80];
		printf("Tik tekst in: ");
		fgets(y,80,stdin);
		y[strlen(y)-1] = '\0';
		char *zin = y;
		char *begin = zin;
		char *eind = begin + (strlen(zin)-1); 
		
		while (eind > begin){
			char backup_begin = *begin;
			*begin = *eind;
			*eind = backup_begin;
			
			begin++;
			eind--;
		}
		printf("In omgekeerde volgorde: %s\n",zin);
	}
	return 0;
}