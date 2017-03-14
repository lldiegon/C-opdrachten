#include <stdio.h>
#include <stdbool.h>

bool equal_rows(int a1[],int a2[], int size) {
	int hetzelfde = 1;
	for (int b=0; b<=size; b++){
			if (a1[b] != a2[b]){
				hetzelfde = 0;
			}
		}
	if (hetzelfde == 0){
		return 0;
	}
	if (hetzelfde == 1){
		return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int size = 3;
	printf("De size van de array is: %d", size);
	int a1[3] = {1, 2, 3};
	int a2[3] = {1, 2, 3};
	bool gelijk = equal_rows(a1, a2, size);
	
	if (gelijk == 0){
				printf("\nDeze rijen komen niet overeen :(");
			}
	else if (gelijk == 1){
		printf("\nWow fantastisch zeg, de rijen komen overeen :)");
	}
}
