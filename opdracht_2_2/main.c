#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char tekst1[80];
	char tekst2[80];
	printf("tik regel 1 in: ");
	fgets(tekst1,80,stdin);
	printf("tik regel 2 in: ");
	fgets(tekst2,80,stdin);
	int a = 0;
	int lengte1 = strlen(tekst1);
	int lengte2 = strlen(tekst2);
	for (;a < lengte1 || a < lengte2;){
		if(tekst1[a] != tekst2[a]){
			printf("Het verschil in index begint bij index %d", a);
			break;
		}
		a++;
	}
	return 0;
	
}
