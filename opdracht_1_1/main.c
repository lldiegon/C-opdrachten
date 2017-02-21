#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Voer x en y in om het bij elkaar op te tellen.\n");
	int x;
	int y;
	int a;
	int b;
	printf("X: ");
	a = scanf("%d", &x);
	printf("Y: ");
	b = scanf("%d", &y);
	if(a == 0 || b == 0){
		printf("\nFoutieve invoer!");
	}
	else{
		printf("%d + %d = %d", x, y, x+y);
	}
	return 0;
}
