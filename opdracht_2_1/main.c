#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	int a[10];
	int nullen = 0;
	int eenen = 0;
	srand ( time(NULL) );
	
	printf("De array ziet er als volgt uit: ");
	for(int i = 0; i < 10; i++) {
		int random_number = rand()%2;
		if(random_number == 0){
			nullen++;
		}
		if(random_number == 1) {
			eenen++;
		}
		a[i] = random_number;
		printf("%d", a[i]);
	}
	printf("\nHet aantal nullen: %d", nullen);
	printf("\nHet aantal eenen: %d", eenen);
	if(nullen == eenen){
		printf("\nHet aantal nullen en eenen zijn aan elkaar gelijk!");
	}
	else {
		printf("\nHet aantal nullen en eenen zijn niet aan elkaar gelijk!");
	}
	return 0;
}
