#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
    printf("tik een getal in: ");
    fflush(stdout);
    while(!scanf("%d", &i) || i < 0 || i > 100 ) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ;
        printf("tik een getal in: ");
    }
	int max = 20;
	for(int vermenigvuldiging = 1; vermenigvuldiging < 11; vermenigvuldiging++){
		printf("%*d x %d = %d\n", max, vermenigvuldiging, i, vermenigvuldiging*i);
	}
	return 0;
}
