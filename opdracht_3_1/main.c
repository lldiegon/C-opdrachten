#include <stdio.h>
#include <stdlib.h>

int count(int a[], int size, int n) {// size is de lengte van a
		int voorgekomen = 0;
		for (int b=0; b<=size; b++){
			if (a[b] == n){
				voorgekomen++;
			}
		}
	printf("%d komt %d keer voor in de rij.", n, voorgekomen);
	return 0;
}

int main(int argc, char **argv){
	int a[] = {5, 2, 9, 6, 10, 10, 7, 8, 7};
	int size = sizeof(a);
	int n;
	printf("Voer een geheel getal in: ");
	scanf("%d", &n);
	count(a, size, n);
	return 0;
}
