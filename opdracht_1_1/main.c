#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Voer x en y in om het bij elkaar op te tellen.\n");
	int x;
	int y;
	printf("X: ");
	scanf("%d", &x);
	printf("Y: ");
	scanf("%d", &y);
	printf("X + Y = %d", x+y);
	return 0;
}
