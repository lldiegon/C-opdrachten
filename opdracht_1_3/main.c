#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
    printf("Tik een getal in tussen de 0 en 81: ");
    fflush(stdout);
    while(!scanf("%d", &i) || i < 0 || i > 80 ) {
        printf("Foutieve invoer!\n");
        while(getchar() != '\n')
            ;
        printf("tik een getal in: ");
    }
	printf("Nu komt de for loop: \n");
	int rij = 0;
	for(; rij < i; rij++){
		for (int kolom = 0; kolom < rij; kolom++)
			printf("*");
		printf("\n");
	}
	for(; rij > 0; rij--){
		int kolom = rij;
		for (; kolom > 0; kolom--){
			printf("*");
		}
		printf("\n");
	}
	printf("Nu komt de while loop: \n");
	while(rij < i){
		int kolom = 0;
		while(kolom < rij){
			kolom++;
			printf("*");
		}
		rij++;
	printf("\n");
	}
	while(rij > 0){
		int kolom = rij;
		while(kolom > 0){
			kolom--;
			printf("*");
		}
		rij--;
	printf("\n");
	}
	return 0;
}
