#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool valid_row(int a[], int size, int nullen, int eenen){ // size is de lengte van a
	int valid = 1;
	printf("\nHet aantal nullen: %d", nullen);
	printf("\nHet aantal eenen: %d", eenen);
	if(nullen == eenen){
		printf("\nHet aantal nullen en eenen zijn aan elkaar gelijk!");
	}
	else if(nullen != eenen){
		printf("\nHet aantal nullen en eenen zijn niet aan elkaar gelijk!");
		valid = 0;
	}
	for(int c=0; c<size; c++){
		if(a[c] != 0 && a[c] != 1){
			valid = 0;
			printf("\nEr zit een getal in de array dat geen 1 of 0 is!");
		}
	}
	for(int k=2; k<size; k++){
		if(a[k] == a[k-1] && a[k-1] == a[k-2]){
			valid = 0;
			printf("\nEr komen 3 dezelfde cijfers achter elkaar!");
		}
	}
	
	return valid;
}

int main(int argc, char **argv)
{
	int size = 6;
	int a[size];
	int nullen = 0;
	int eenen = 0;
	
	printf("De array ziet er als volgt uit: ");
	for(int i = 0; i < size; i++) {
		int random_number = rand()%2;
		if(random_number == 0){
			nullen++;
		}
		else if(random_number == 1) {
			eenen++;
		}
		a[i] = random_number;
		printf("%d", a[i]);
	}
	bool geldige_rij = valid_row(a, size, nullen, eenen);
	printf("\nDe rij is bij 0 niet geldig, bij 1 wel: %d", geldige_rij);
	return 0;
}
