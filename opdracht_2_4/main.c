#include <stdio.h>
#include <string.h>

typedef struct voorwerp {
		int nummer;
		char naam[20];
		double gewicht, lengte;
	} 
VOORWERP;

int main(int argc, char **argv)
{
	char b[20];
	
	struct voorwerp a;
	printf("Voer het nummer in: ");
	scanf("%d", &a.nummer);
	printf("Voer de naam in: ");
	scanf("%s", b);
	strcpy( a.naam, b );
	printf("Voer het gewicht in: ");
	scanf("%lf", &a.gewicht);
	printf("Voer de lengte in: ");
	scanf("%lf", &a.lengte);
	
	printf("\nNummer: %d", a.nummer);
	printf("\nNaam: %s", a.naam);
	printf("\nNummer: %lf", a.gewicht);
	printf("\nNummer: %lf", a.lengte);
	return 0;
}
